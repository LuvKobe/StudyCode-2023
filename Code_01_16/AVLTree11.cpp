#pragma once
#include <assert.h>
#include <vector>
#include <queue>
#include <time.h>
#include <map>
#include <iostream>

using namespace std;

template<class K, class V>
struct AVLTreeNode
{
	// �洢�ļ�ֵ��
	pair<K, V> _kv;

	// ������
	AVLTreeNode<K, V>* _left;
	AVLTreeNode<K, V>* _right;
	AVLTreeNode<K, V>* _parent;

	// ƽ������(balance factor)
	int _bf; // �������߶� - �������߶�

	// ���캯��
	AVLTreeNode(const pair<K, V>& kv)
		:_kv(kv)
		,_left(nullptr)
		,_right(nullptr)
		,_parent(nullptr)
		,_bf(0)
	{}
};

// ��
template<class K, class V>
class AVLTree
{
	typedef AVLTreeNode<K, V> Node;
public:
	// ���뺯��
	bool Insert(const pair<K, V>& kv)
	{
		// ���AVL���ǿ������Ѳ���ڵ�ֱ����Ϊ���ڵ�
		if (_root == nullptr)
		{
			_root = new Node(kv);
			_root->_bf = 0;
			return true;
		}

		// 1.���ն����������Ĺ������
		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_kv.first < kv.first) // ������ڵ��keyֵ���ڵ�ǰ�ڵ��keyֵ
			{
				// ����������
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_kv.first > kv.first) // ������ڵ��keyֵС�ڵ�ǰ�ڵ��keyֵ
			{
				// ����������
				parent = cur; 
				cur = cur->_left;
			}
			else // ������ڵ��keyֵ���ڵ�ǰ�ڵ��keyֵ
			{
				return false; // ����ʧ�ܣ�����false
			}
		}

		// 2.��ѭ��������˵��cur�ҵ��˿յ�λ�ã���ô�Ͳ���
		cur = new Node(kv); // ����һ���½ڵ�
		if (parent->_kv.first < kv.first) // ����½ڵ��keyֵ���ڵ�ǰparent�ڵ��keyֵ
		{
			// �Ͱ��½ڵ����ӵ�parent���ұ�
			parent->_right = cur;
		}
		else // ����½ڵ��keyֵС�ڵ�ǰparent�ڵ��keyֵ
		{
			// �Ͱ��½ڵ����ӵ�parent�����
			parent->_left = cur;
		}
		cur->_parent = parent; // �����˰��½ڵ������_parentָ��parent(��Ϊ���Ƕ������һ��������)

		// 3.����ƽ������,������ֲ�ƽ��,����Ҫ������ת
		while (parent) // ��ԶҪ���µ����ڵ�ȥ
		{
			if (cur == parent->_right) // ���cur����parent���ұߣ�˵��parent������������
			{
				parent->_bf++; // ��ôparent��ƽ������Ҫ++
			}
			else // ���cur����parent����ߣ�˵��parent������������
			{
				parent->_bf--; // ��ôparent��ƽ������Ҫ--
			}

			// �ж��Ƿ�Ҫ�������£������Ƿ���Ҫ������ת
			if (parent->_bf == 0) // ���parent��bf����0��˵�����������߶�һ�£��͸��½���(ԭ�����²���Ľڵ��parent���������а�����һ�߸���ˣ�
			{
				// �߶Ȳ���,���½���
				break;
			}
			else if (parent->_bf == 1 || parent->_bf == -1) // �������ϸ���ƽ������(����ڵ㵼��ĳһ�߱���ˣ�˵��parent���ڵ������߶ȸı���)
			{
				// �����ĸ߶ȱ��ˣ���Ҫ�������ϸ�������
				cur = cur->_parent;
				parent = parent->_parent;
			}
			else if (parent->_bf == 2 || parent->_bf == -2) // ˵������ڵ㵼�±����ߵ�һ���ֱ���ˣ�������ƽ���ˣ���ô��ʱ��Ҫ����ת����
			{
				// ��ת�����ִ���ʽ
				if (parent->_bf == 2 && cur->_bf == 1) // �ұ߸ߣ�����
				{
					RotateL(parent);
				}
				else if (parent->_bf == -2 && cur->_bf == -1) // ��߸ߣ��ҵ���
				{
					RotateR(parent);
				}
				else if (parent->_bf == -2 && cur->_bf == 1) // ����˫��
				{
					RotateLR(parent);
				}
				else if (parent->_bf == 2 && cur->_bf == -1) // ����˫��
				{
					RotateRL(parent);
				}

				// ��ת��ɣ�����
				break;
			}
			else
			{
				// ��������ߵ������˵���ڲ���ڵ�֮ǰAVL���ʹ��ڲ�ƽ���������Ҳ���Ǵ���ƽ������ >= 2�Ľڵ�
				// ���������һ�����Խ��д���
				assert(false);
			}
		}
		// ����ɹ�������true
		return true;
	}
private:
	// �������ұ߸���Ҫ������
	void RotateL(Node* parent)
	{
		Node* subR = parent->_right;
		Node* subRL = subR->_left;
		Node* ppNode = parent->_parent; // �ȱ���parent��parent

		// 1.����parent��subRL֮��Ĺ�ϵ
		parent->_right = subRL;
		if (subRL) // ���subRL�ڵ㲻Ϊ�գ���ôҪ��������parent
		{
			subRL->_parent = parent;
		}

		// 2.����subR��parent֮��Ĺ�ϵ
		subR->_left = parent;
		parent->_parent = subR;

		// 3.����ppNode��subR֮��Ĺ�ϵ�����������parent���������ĸ������Ǿֲ�������
		if (parent == _root) // ��parent�Ǹ��ڵ�ʱ
		{
			_root = subR; // subR�ͱ�����µĸ��ڵ�
			_root->_parent = nullptr; // ���ڵ�ĵ�parentΪ��
		}
		else // ��parent���������ľֲ�����ʱ
		{
			if (parent == ppNode->_left) // ���parent��ppNode�����
			{
				ppNode->_left = subR; // ��ôsubR����parent��������
			}
			else // ���parent��ppNode���ұ�
			{
				ppNode->_right = subR; // ��ôsubR����parent��������
			}
			subR->_parent = ppNode; // subR��parent��Ҫָ��ppNode
		}

		// ����ƽ������
		parent->_bf = 0;
		subR->_bf = 0;
	}

	// �ҵ�������߸߾��ҵ�����
	void RotateR(Node* parent)
	{
		Node* subL = parent->_left; 
		Node* subLR = subL->_right;
		//Node* subLR = subL->_right;
		Node* ppNode = parent->_parent;

		// 1.����parent��subLR֮��Ĺ�ϵ
		parent->_left = subLR;
		if (subLR) // ���subLR�ڵ㲻Ϊ�գ���ôҪ��������parent
		{
			subLR->_parent = parent;
		}
		 
		// 2.����subL��parent֮��Ĺ�ϵ
		subL->_right = parent;
		parent->_parent = subL;

		// 3.����ppNode��subL֮��Ĺ�ϵ�����������parent���������ĸ������Ǿֲ�������
		if (parent == _root) // ��parent�Ǹ��ڵ�ʱ
		{
			_root = subL; // subL�ͱ�����µĸ��ڵ�
			_root->_parent = nullptr; // ���ڵ�ĵ�parentΪ��
		}
		else // ��parent���������ľֲ�����ʱ
		{
			if (parent == ppNode->_left) // ���parent��ppNode�����
			{
				ppNode->_left = subL; // ��ôsubL����parent��������
			}
			else // ���parent��ppNode���ұ�
			{
				ppNode->_right = subL; // ��ôsubL����parent��������
			}
			subL->_parent = ppNode; // subR��parent��Ҫָ��ppNode
		}
		// ����ƽ������
		parent->_bf = 0;
		subL->_bf = 0;
	}

	// ����˫���������������ҵ�����
	void RotateLR(Node* parent)
	{
		Node* subL = parent->_left;
		Node* subLR = subL->_right;
		int bf = subLR->_bf;

		// 1.����subLΪ��ת���������
		RotateL(parent->_left);

		// 2.����parentΪ��ת������ҵ���
		RotateR(parent);

		// 3.����ƽ������
		if (bf == 0)
		{
			parent->_bf = 0;
			subL->_bf = 0;
			subLR->_bf = 0;
		}
		else if (bf == 1)
		{
			parent->_bf = 0;
			subL->_bf = -1;
			subLR->_bf = 0;
		}
		else if (bf == -1)
		{
			parent->_bf = 1;
			subL->_bf = 0;
			subLR->_bf = 0;
		}
		else
		{
			// ����ߵ������˵��subLR��ƽ����������תǰ��������
			assert(false);
		}
	}

	// ����˫�������ҵ�������������
	void RotateRL(Node* parent)
	{
		Node* subR = parent->_right;
		Node* subRL = subR->_left;
		int bf = subRL->_bf;

		// 1.����subRΪ��ת������ҵ���
		RotateR(parent->_right);

		// 2.����parentΪ��ת���������
		RotateL(parent);

		// 3.����ƽ������
		if (bf == 0)
		{
			subRL->_bf = 0;
			parent->_bf = 0;
			subR->_bf = 0;
		}
		else if (bf == 1)
		{
			subRL->_bf = 0;
			parent->_bf = -1;
			subR->_bf = 0;
		}
		else if (bf == -1)
		{
			subRL->_bf = 0;
			parent->_bf = 0;
			subR->_bf = 1;
		}
		else
		{
			// ����ߵ������˵��subRL��ƽ����������תǰ��������
			assert(false);
		}
	}

	// ����������Ӻ�����
	void _InOrder(Node* root)
	{
		if (root == nullptr)
			return;

		_InOrder(root->_left);
		cout << root->_kv.first << " ";
		_InOrder(root->_right);
	}

	// �����ĸ߶ȣ��Ӻ�����
	int _Height(Node* root)
	{
		if (root == nullptr) // �����߶�Ϊ0
			return 0;

		int lh = _Height(root->_left); // �ݹ�����������߶�
		int rh = _Height(root->_right); // �ݹ�����������߶�

		return lh > rh ? lh + 1 : rh + 1; // �����߶Ȼ��������߶ȴ����һ����Ȼ����+1�������������ĸ߶�
	}

	// �ж��Ƿ�Ϊƽ����������Ӻ�����
	bool _IsBalanceTree(Node* root)
	{
		// ����Ҳ��AVL��
		if (nullptr == root)
			return true;

		// ����pRoot�ڵ��ƽ�����ӣ���pRoot���������ĸ߶Ȳ�
		int leftHeight = _Height(root->_left);
		int rightHeight = _Height(root->_right);
		int diff = rightHeight - leftHeight;

		// ����������ƽ��������pRoot��ƽ�����Ӳ���ȣ�����
		// pRootƽ�����ӵľ���ֵ����1����һ������AVL��
		if (abs(diff) >= 2)
		{
			cout << root->_kv.first << "�ڵ�ƽ�������쳣" << endl;
			return false;
		}

		if (diff != root->_bf)
		{
			cout << root->_kv.first << "�ڵ�ƽ�����Ӳ�����ʵ��" << endl;
			return false;
		}

		// pRoot��������������AVL���������һ����AVL��
		return _IsBalanceTree(root->_left)
			&& _IsBalanceTree(root->_right);
	}
public:
	// �������
	void InOrder()
	{
		_InOrder(_root);
		cout << endl;
	}

	// �ж��Ƿ�Ϊƽ�������
	bool IsBalanceTree()
	{
		return _IsBalanceTree(_root);
	}

	// ���ĸ߶�
	int Height()
	{
		return _Height(_root);
	}

	// ����ÿһ��
	vector<vector<int>> levelOrder() {
		vector<vector<int>> vv;
		if (_root == nullptr)
			return vv;

		queue<Node*> q;
		int levelSize = 1;
		q.push(_root);

		while (!q.empty())
		{
			// levelSize����һ��һ���
			vector<int> levelV;
			while (levelSize--)
			{
				Node* front = q.front();
				q.pop();
				levelV.push_back(front->_kv.first);
				if (front->_left)
					q.push(front->_left);

				if (front->_right)
					q.push(front->_right);
			}
			vv.push_back(levelV);
			for (auto e : levelV)
			{
				cout << e << " ";
			}
			cout << endl;

			// ��һ����꣬��һ��Ͷ�������
			levelSize = q.size();
		}

		return vv;
	}
private:
	Node* _root = nullptr; // ���ڵ�
};

//void TestAVLTree1()
//{
//	int a[] = { 4, 2, 6, 1, 3, 5, 15, 7, 16, 14 };
//
//	AVLTree<int, int> t;
//	for (auto e : a)
//	{
//		t.Insert(make_pair(e, e));
//	}
//	t.levelOrder();
//}

// �������ֵ
void TestAVLTree2()
{
	const size_t N = 20;

	vector<int> v;
	v.reserve(N);
	srand(time(0));

	for (size_t i = 0; i < N; ++i)
	{
		v.push_back(rand());
	}

	AVLTree<int, int> t;
	for (auto e : v)
	{
		t.Insert(make_pair(e, e));
	}
	if (t.IsBalanceTree())
	{
		cout << "AVL��ƽ��" << endl;
	}
	else
	{
		cout << "AVL����ƽ��" << endl;
	}
	cout << "AVL���߶ȣ�" << t.Height() << endl;

	cout << "���������";
	t.InOrder();
}

// ��������ֵ
void TestAVLTree1()
{
	const int N = 20;

	vector<int> v;
	v.reserve(N);
	srand(time(0));
	for (size_t i = 0; i < N; ++i)
	{
		v.push_back(i);
	}

	AVLTree<int, int> t;
	for (auto e : v)
	{
		t.Insert(make_pair(e, e));
	}

	if (t.IsBalanceTree())
	{
		cout << "AVL��ƽ��" << endl;
	}
	else
	{
		cout << "AVL����ƽ��" << endl;
	}
	//cout << "AVL���Ƿ�ƽ�⣨1Ϊture��0Ϊfalse����" << t.IsBalanceTree() << endl;
	cout << "AVL���߶ȣ�" << t.Height() << endl;

	cout << "���������";
	t.InOrder();
}
