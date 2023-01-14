#pragma once
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
				cur = cur->_left;
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
			_root = subR; // ��ʱsubR�ͱ���˸��ڵ�
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
		if (parent == _root)
		{
			_root = subL;
			_root->_parent = nullptr;
		}
		else
		{
			if (parent == ppNode->_left)
			{
				ppNode->_left = subL;
			}
			else
			{
				ppNode->_right = subL;
			}
			subL->_parent == ppNode;
		}
		// ����ƽ������
		parent->_bf = 0;
		subL->_bf = 0;
	}
private:
	Node* _root = nullptr; // ���ڵ�
};

