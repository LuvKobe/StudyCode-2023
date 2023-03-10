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
	// 存储的键值对
	pair<K, V> _kv;

	// 三叉链
	AVLTreeNode<K, V>* _left;
	AVLTreeNode<K, V>* _right;
	AVLTreeNode<K, V>* _parent;

	// 平衡因子(balance factor)
	int _bf; // 右子树高度 - 左子树高度

	// 构造函数
	AVLTreeNode(const pair<K, V>& kv)
		:_kv(kv)
		,_left(nullptr)
		,_right(nullptr)
		,_parent(nullptr)
		,_bf(0)
	{}
};

// 树
template<class K, class V>
class AVLTree
{
	typedef AVLTreeNode<K, V> Node;
public:
	// 插入函数
	bool Insert(const pair<K, V>& kv)
	{
		// 如果AVL树是空树，把插入节点直接作为根节点
		if (_root == nullptr)
		{
			_root = new Node(kv);
			_root->_bf = 0;
			return true;
		}

		// 1.按照二叉搜索树的规则插入
		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_kv.first < kv.first) // 待插入节点的key值大于当前节点的key值
			{
				// 往右子树走
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_kv.first > kv.first) // 待插入节点的key值小于当前节点的key值
			{
				// 往左子树走
				parent = cur; 
				cur = cur->_left;
			}
			else // 待插入节点的key值等于当前节点的key值
			{
				return false; // 插入失败，返回false
			}
		}

		// 2.当循环结束，说明cur找到了空的位置，那么就插入
		cur = new Node(kv); // 构造一个新节点
		if (parent->_kv.first < kv.first) // 如果新节点的key值大于当前parent节点的key值
		{
			// 就把新节点链接到parent的右边
			parent->_right = cur;
		}
		else // 如果新节点的key值小于当前parent节点的key值
		{
			// 就把新节点链接到parent的左边
			parent->_left = cur;
		}
		cur->_parent = parent; // 别忘了把新节点里面的_parent指向parent(因为我们定义的是一个三叉链)

		// 3.更新平衡因子,如果出现不平衡,则需要进行旋转
		while (parent) // 最远要更新到根节点去
		{
			if (cur == parent->_right) // 如果cur插在parent的右边，说明parent的右子树增高
			{
				parent->_bf++; // 那么parent的平衡因子要++
			}
			else // 如果cur插在parent的左边，说明parent的左子树增高
			{
				parent->_bf--; // 那么parent的平衡因子要--
			}

			// 判断是否要继续更新，或者是否需要进行旋转
			if (parent->_bf == 0) // 如果parent的bf等于0，说明左右子树高度一致，就更新结束(原因是新插入的节点把parent左右子树中矮的那一边给填补了）
			{
				// 高度不变,更新结束
				break;
			}
			else if (parent->_bf == 1 || parent->_bf == -1) // 继续往上更新平衡因子(插入节点导致某一边变高了，说明parent所在的子树高度改变了)
			{
				// 子树的高度变了，就要继续往上更新祖先
				cur = cur->_parent;
				parent = parent->_parent;
			}
			else if (parent->_bf == 2 || parent->_bf == -2) // 说明插入节点导致本来高的一边又变高了，子树不平衡了，那么此时需要做旋转处理
			{
				// 旋转的四种处理方式
				if (parent->_bf == 2 && cur->_bf == 1) // 右边高，左单旋
				{
					RotateL(parent);
				}
				else if (parent->_bf == -2 && cur->_bf == -1) // 左边高，右单旋
				{
					RotateR(parent);
				}
				else if (parent->_bf == -2 && cur->_bf == 1) // 左右双旋
				{
					RotateLR(parent);
				}
				else if (parent->_bf == 2 && cur->_bf == -1) // 右左双旋
				{
					RotateRL(parent);
				}

				// 旋转完成，跳出
				break;
			}
			else
			{
				// 如果程序走到了这里，说明在插入节点之前AVL树就存在不平衡的子树，也就是存在平衡因子 >= 2的节点
				// 所以这里加一个断言进行处理
				assert(false);
			}
		}
		// 插入成功，返回true
		return true;
	}
private:
	// 左单旋（右边高需要左单旋）
	void RotateL(Node* parent)
	{
		Node* subR = parent->_right;
		Node* subRL = subR->_left;
		Node* ppNode = parent->_parent; // 先保存parent的parent

		// 1.建立parent和subRL之间的关系
		parent->_right = subRL;
		if (subRL) // 如果subRL节点不为空，那么要更新它的parent
		{
			subRL->_parent = parent;
		}

		// 2.建立subR和parent之间的关系
		subR->_left = parent;
		parent->_parent = subR;

		// 3.建立ppNode和subR之间的关系（分情况讨论parent是整颗树的根，还是局部子树）
		if (parent == _root) // 当parent是根节点时
		{
			_root = subR; // subR就变成了新的根节点
			_root->_parent = nullptr; // 根节点的的parent为空
		}
		else // 当parent是整个树的局部子树时
		{
			if (parent == ppNode->_left) // 如果parent在ppNode的左边
			{
				ppNode->_left = subR; // 那么subR就是parent的左子树
			}
			else // 如果parent在ppNode的右边
			{
				ppNode->_right = subR; // 那么subR就是parent的右子树
			}
			subR->_parent = ppNode; // subR的parent还要指向ppNode
		}

		// 更新平衡因子
		parent->_bf = 0;
		subR->_bf = 0;
	}

	// 右单旋（左边高就右单旋）
	void RotateR(Node* parent)
	{
		Node* subL = parent->_left; 
		Node* subLR = subL->_right;
		//Node* subLR = subL->_right;
		Node* ppNode = parent->_parent;

		// 1.建立parent和subLR之间的关系
		parent->_left = subLR;
		if (subLR) // 如果subLR节点不为空，那么要更新它的parent
		{
			subLR->_parent = parent;
		}
		 
		// 2.建立subL和parent之间的关系
		subL->_right = parent;
		parent->_parent = subL;

		// 3.建立ppNode和subL之间的关系（分情况讨论parent是整颗树的根，还是局部子树）
		if (parent == _root) // 当parent是根节点时
		{
			_root = subL; // subL就变成了新的根节点
			_root->_parent = nullptr; // 根节点的的parent为空
		}
		else // 当parent是整个树的局部子树时
		{
			if (parent == ppNode->_left) // 如果parent在ppNode的左边
			{
				ppNode->_left = subL; // 那么subL就是parent的左子树
			}
			else // 如果parent在ppNode的右边
			{
				ppNode->_right = subL; // 那么subL就是parent的右子树
			}
			subL->_parent = ppNode; // subR的parent还要指向ppNode
		}
		// 更新平衡因子
		parent->_bf = 0;
		subL->_bf = 0;
	}

	// 左右双旋（先左单旋，再右单旋）
	void RotateLR(Node* parent)
	{
		Node* subL = parent->_left;
		Node* subLR = subL->_right;
		int bf = subLR->_bf;

		// 1.先以subL为旋转点进行左单旋
		RotateL(parent->_left);

		// 2.再以parent为旋转点进行右单旋
		RotateR(parent);

		// 3.更新平衡因子
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
			// 如果走到了这里，说明subLR的平衡因子在旋转前就有问题
			assert(false);
		}
	}

	// 右左双旋（先右单旋，再左单旋）
	void RotateRL(Node* parent)
	{
		Node* subR = parent->_right;
		Node* subRL = subR->_left;
		int bf = subRL->_bf;

		// 1.先以subR为旋转点进行右单旋
		RotateR(parent->_right);

		// 2.再以parent为旋转点进行左单旋
		RotateL(parent);

		// 3.更新平衡因子
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
			// 如果走到了这里，说明subRL的平衡因子在旋转前就有问题
			assert(false);
		}
	}

	// 中序遍历（子函数）
	void _InOrder(Node* root)
	{
		if (root == nullptr)
			return;

		_InOrder(root->_left);
		cout << root->_kv.first << " ";
		_InOrder(root->_right);
	}

	// 求树的高度（子函数）
	int _Height(Node* root)
	{
		if (root == nullptr) // 空树高度为0
			return 0;

		int lh = _Height(root->_left); // 递归计算左子树高度
		int rh = _Height(root->_right); // 递归计算右子树高度

		return lh > rh ? lh + 1 : rh + 1; // 左树高度或者右树高度大的哪一个，然后再+1，就是整棵树的高度
	}

	// 判断是否为平衡二叉树（子函数）
	bool _IsBalanceTree(Node* root)
	{
		// 空树也是AVL树
		if (nullptr == root)
			return true;

		// 计算pRoot节点的平衡因子：即pRoot左右子树的高度差
		int leftHeight = _Height(root->_left);
		int rightHeight = _Height(root->_right);
		int diff = rightHeight - leftHeight;

		// 如果计算出的平衡因子与pRoot的平衡因子不相等，或者
		// pRoot平衡因子的绝对值超过1，则一定不是AVL树
		if (abs(diff) >= 2)
		{
			cout << root->_kv.first << "节点平衡因子异常" << endl;
			return false;
		}

		if (diff != root->_bf)
		{
			cout << root->_kv.first << "节点平衡因子不符合实际" << endl;
			return false;
		}

		// pRoot的左和右如果都是AVL树，则该树一定是AVL树
		return _IsBalanceTree(root->_left)
			&& _IsBalanceTree(root->_right);
	}
public:
	// 中序遍历
	void InOrder()
	{
		_InOrder(_root);
		cout << endl;
	}

	// 判断是否为平衡二叉树
	bool IsBalanceTree()
	{
		return _IsBalanceTree(_root);
	}

	// 树的高度
	int Height()
	{
		return _Height(_root);
	}

	// 遍历每一层
	vector<vector<int>> levelOrder() {
		vector<vector<int>> vv;
		if (_root == nullptr)
			return vv;

		queue<Node*> q;
		int levelSize = 1;
		q.push(_root);

		while (!q.empty())
		{
			// levelSize控制一层一层出
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

			// 上一层出完，下一层就都进队列
			levelSize = q.size();
		}

		return vv;
	}
private:
	Node* _root = nullptr; // 根节点
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

// 插入随机值
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
		cout << "AVL树平衡" << endl;
	}
	else
	{
		cout << "AVL树不平衡" << endl;
	}
	cout << "AVL树高度：" << t.Height() << endl;

	cout << "中序遍历：";
	t.InOrder();
}

// 插入有序值
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
		cout << "AVL树平衡" << endl;
	}
	else
	{
		cout << "AVL树不平衡" << endl;
	}
	//cout << "AVL树是否平衡（1为ture，0为false）：" << t.IsBalanceTree() << endl;
	cout << "AVL树高度：" << t.Height() << endl;

	cout << "中序遍历：";
	t.InOrder();
}
