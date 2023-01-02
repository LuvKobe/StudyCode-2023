#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <array>
#include <string>
#include <deque>
#include <functional>
#include <assert.h>
using namespace std;


//void test_stack()
//{
//	stack<int> st;
//
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	st.push(4);
//	st.push(5);
//	st.push(6);
//	st.push(7);
//	st.push(8);
//	st.push(9);
//	st.push(10);
//
//	cout << st.size() << endl;
//
//}

//void test_stack()
//{
//	stack<int> st1;
//	st1.push(1);
//	st1.push(2);
//	st1.push(3);
//	st1.push(4);
//	st1.push(5);
//
//	stack<int> st2;
//	st2.push(6);
//	st2.push(7);
//	st2.push(8);
//	st2.push(9);
//	st2.push(10);
//
//	st1.swap(st2);
//
//	while (!st1.empty()) {
//		cout << st1.top() << " ";
//		st1.pop();
//	}
//
//
//	while (!st2.empty()) {
//		cout << st2.top() << " ";
//		st2.pop();
//	}
//
//}

//void test_stack()
//{
//	stack<string> st;
//
//	st.emplace("First");
//	st.emplace("Second");
//
//	while (!st.empty()) {
//		cout << st.top();
//		st.pop();
//	}
//
//}

//void test_stack()
//{
//	stack<int> st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	st.push(4);
//	st.push(5);
//
//	st.emplace(10);
//
//	while (!st.empty()) {
//		cout << st.top() << " ";
//		st.pop();
//	}
//
//}


//void test_queue()
//{
//	queue<int> q1;
//	q1.push(1);
//	q1.push(2);
//	q1.push(3);
//	q1.push(4);
//	q1.push(5);
//	q1.push(6);
//
//	while (!q1.empty()) {
//		cout << q1.front() << " ";
//		q1.pop();
//	}
//
//	q1.emplace(100);
//
//	while (!q1.empty()) {
//		cout << q1.front() << " ";
//		q1.pop();
//	}
//}


//namespace edc
//{
//	template<class T, class Container = deque<T>>
//	class Stack
//	{
//	public:
//		// 入栈
//		void push(const T& x)
//		{
//			_con.push_back(x);
//		}
//
//		// 出栈
//		void pop()
//		{
//			_con.pop_back();
//		}
//
//		// 获取栈顶元素
//		T& top()
//		{
//			return _con.back();
//		}
//
//		const T& top() const
//		{
//			return _con.back();
//		}
//
//		//获取栈中有效元素个数
//		size_t size() const
//		{
//			return _con.size();
//		}
//
//		//判断栈是否为空
//		bool empty() const
//		{
//			return _con.empty();
//		}
//
//		//交换两个栈中的数据
//		void swap(Stack<T, Container>& st)
//		{
//			_con.swap(st._con);
//		}
//	private:
//		Container _con;
//	};
//	
//	// 测试函数
//	void test_stack()
//	{
//		Stack<int> st;
//		st.push(1);
//		st.push(2);
//		st.push(3);
//		st.push(4);
//		st.push(5);
//		st.push(6);
//
//		cout << "栈中元素个数：" << st.size() << endl;
//
//		cout << "出栈顺序：";
//		while (!st.empty()) {
//			cout << st.top() << " ";
//			st.pop();
//		}
//	}
//
//
//
//
//	template<class T, class Container = deque<T>>
//	class Queue
//	{
//	public:
//		// 入队
//		void push(const T& x)
//		{
//			_con.push_back(x);
//		}
//
//		// 出队
//		void pop()
//		{
//			_con.pop_front();
//		}
//
//		// 获取队头元素
//		T& front()
//		{
//			return _con.front();
//		}
//
//		const T& front() const
//		{
//			return _con.front();
//		}
//
//		// 获取队尾元素
//		T& back()
//		{
//			return _con.back();
//		}
//
//		const T& back() const
//		{
//			return _con.back();
//		}
//
//		//获取队列中有效元素个数
//		size_t size() const
//		{
//			return _con.size();
//		}
//
//		//判断队列是否为空
//		bool empty() const
//		{
//			return _con.empty();
//		}
//
//		//交换两个栈中的数据
//		void swap(Queue<T, Container>& q)
//		{
//			_con.swap(q._con);
//		}
//	private:
//		Container _con;
//	};
//
//	// 测试函数
//	void test_queue()
//	{
//		Queue<int> q;
//		q.push(1);
//		q.push(2);
//		q.push(3);
//		q.push(4);
//		q.push(5);
//		q.push(6);
//		q.push(7);
//
//		cout << "队列中元素个数：" << q.size() << endl;
//
//		cout << "出队顺序：";
//		while (!q.empty()) {
//			cout << q.front() << " ";
//			q.pop();
//		}
//	}
//}

//void AdjustUp(vector<int>& v1, int child)
//{
//	int parent = ((child - 1) >> 1); // 通过child计算parent的下标
//	while (child > 0) //调整到根结点的位置截止
//	{
//		if (v1[parent] < v1[parent])
//		{
//			// 父节点与子节点交换
//			swap(v1[child], v1[parent]);
//
//			// 继续向上调整
//			child = parent;
//			parent = ((child - 1) >> 1);
//		}
//		else {
//			break;
//		}
//	}
//}
//
////堆的向下调整（大堆）
//void AdjustDown(vector<int>& v1, int n, int parent)
//{
//	//child记录左右孩子中值较大的孩子的下标
//	int child = 2 * parent + 1;//先默认其左孩子的值较小
//	while (child < n)
//	{
//		if (child + 1 < n && v1[child + 1] < v1[child])//右孩子存在并且右孩子比左孩子小
//		{
//			child++;//较大的孩子改为右孩子
//		}
//		if (v1[child] < v1[parent])//左右孩子中较小孩子的值比父结点还小
//		{
//			//将父结点与较小的子结点交换
//			swap(v1[child], v1[parent]);
//
//			//继续向下进行调整
//			parent = child;
//			child = 2 * parent + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}


namespace edc
{
	// 比较方式（使内部结构为大堆）
	template<class T>
	struct less
	{
		bool operator()(const T& x, const T& y) const
		{
			return x < y;
		}
	};

	// 比较方式（使内部结构为小堆）
	template<class T>
	struct greater
	{
		bool operator()(const T& x, const T& y) const
		{
			return x > y;
		}
	};

	// 优先级队列 --- 大堆 < --- 小堆 >
	template<class T, class Container = vector<T>, class Compare = less<T>>
	class priority_queue
	{
		Compare _comFunc; // 比较方式
	public:
		// 创造空的优先级队列
		priority_queue(const Compare& comFunc = Compare())
			:_comFunc(comFunc)
		{}

		// 以迭代器区间来建堆
		template <class InputIterator>
		priority_queue(InputIterator first, InputIterator last, const Compare& comFunc = Compare())
			: _comFunc(comFunc)
		{
			while (first != last)
			{
				_con.push_back(*first);
				++first;
			}

			// 建堆
			for (int i = (_con.size() - 1 - 1) / 2; i >= 0; --i)
			{
				AdjustDown(i);
			}
		}

		// 堆的向上调整
		void AdjustUp(int child)
		{
			int parent = (child - 1) / 2; // 通过child计算parent的下标
			while (child > 0)
			{
				if (_comFunc(_con[parent], _con[child])) // 通过所给比较方式确定是否需要交换结点位置
				{
					swap(_con[parent], _con[child]); // 将父结点与孩子结点交换
					child = parent; //继续向上进行调整
					parent = (child - 1) / 2;
				}
				else
				{
					break;
				}
			}
		}

		// 插入元素到队尾（并排序）
		// 在容器尾部插入元素后进行一次向上调整算法
		void push(const T& x)
		{
			_con.push_back(x);

			AdjustUp(_con.size() - 1);
		}

		// 堆的向下调整
		void AdjustDown(int parent)
		{
			size_t child = parent * 2 + 1;
			while (child < _con.size())
			{
				if (child + 1 < _con.size() && _comFunc(_con[child], _con[child + 1]))
				{
					++child;
				}

				if (_comFunc(_con[parent], _con[child])) //通过所给比较方式确定是否需要交换结点位置
				{
					swap(_con[parent], _con[child]); //将父结点与孩子结点交换
					parent = child; //继续向下进行调整
					child = parent * 2 + 1;
				}
				else
				{
					break;
				}
			}
		}

		// 删除队头元素（堆顶元素）
		// 将容器头部和尾部元素交换，再将尾部元素删除，最后从根结点开始进行一次向下调整算法
		void pop()
		{
			assert(!_con.empty());
			swap(_con[0], _con[_con.size() - 1]);
			_con.pop_back();

			AdjustDown(0);
		}

		// 访问队头元素（堆顶元素）
		const T& top()
		{
			return _con[0];
		}

		// 获取队列中有效元素个数
		size_t size()
		{
			return _con.size();
		}

		// 判断队列是否为空
		bool empty()
		{
			return _con.empty();
		}

	private:
		Container _con;
	};

	// 测试函数
	void test_priority_queue1()
	{
		priority_queue<int> pq1; // 构建大堆
		pq1.push(2);
		pq1.push(1);
		pq1.push(7);
		pq1.push(5);
		pq1.push(3);
		pq1.push(10);
		pq1.push(4);


		while (!pq1.empty()) {
			cout << pq1.top() << " ";
			pq1.pop();
		}
	}
	
	// 测试函数
	void test_priority_queue2()
	{
		priority_queue<int, vector<int>, greater<int>> pq2; // 构建小堆
		pq2.push(2);
		pq2.push(1);
		pq2.push(7);
		pq2.push(5);
		pq2.push(3);
		pq2.push(10);
		pq2.push(4);

		while (!pq2.empty()) {
			cout << pq2.top() << " ";
			pq2.pop();
		}
	}
}






int main()
{
	//edc::test_stack();
	//edc::test_queue();

	edc::test_priority_queue1();
	cout << endl;

	edc::test_priority_queue2();


	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	return 0;
}