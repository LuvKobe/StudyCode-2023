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
//		// ��ջ
//		void push(const T& x)
//		{
//			_con.push_back(x);
//		}
//
//		// ��ջ
//		void pop()
//		{
//			_con.pop_back();
//		}
//
//		// ��ȡջ��Ԫ��
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
//		//��ȡջ����ЧԪ�ظ���
//		size_t size() const
//		{
//			return _con.size();
//		}
//
//		//�ж�ջ�Ƿ�Ϊ��
//		bool empty() const
//		{
//			return _con.empty();
//		}
//
//		//��������ջ�е�����
//		void swap(Stack<T, Container>& st)
//		{
//			_con.swap(st._con);
//		}
//	private:
//		Container _con;
//	};
//	
//	// ���Ժ���
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
//		cout << "ջ��Ԫ�ظ�����" << st.size() << endl;
//
//		cout << "��ջ˳��";
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
//		// ���
//		void push(const T& x)
//		{
//			_con.push_back(x);
//		}
//
//		// ����
//		void pop()
//		{
//			_con.pop_front();
//		}
//
//		// ��ȡ��ͷԪ��
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
//		// ��ȡ��βԪ��
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
//		//��ȡ��������ЧԪ�ظ���
//		size_t size() const
//		{
//			return _con.size();
//		}
//
//		//�ж϶����Ƿ�Ϊ��
//		bool empty() const
//		{
//			return _con.empty();
//		}
//
//		//��������ջ�е�����
//		void swap(Queue<T, Container>& q)
//		{
//			_con.swap(q._con);
//		}
//	private:
//		Container _con;
//	};
//
//	// ���Ժ���
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
//		cout << "������Ԫ�ظ�����" << q.size() << endl;
//
//		cout << "����˳��";
//		while (!q.empty()) {
//			cout << q.front() << " ";
//			q.pop();
//		}
//	}
//}

//void AdjustUp(vector<int>& v1, int child)
//{
//	int parent = ((child - 1) >> 1); // ͨ��child����parent���±�
//	while (child > 0) //������������λ�ý�ֹ
//	{
//		if (v1[parent] < v1[parent])
//		{
//			// ���ڵ����ӽڵ㽻��
//			swap(v1[child], v1[parent]);
//
//			// �������ϵ���
//			child = parent;
//			parent = ((child - 1) >> 1);
//		}
//		else {
//			break;
//		}
//	}
//}
//
////�ѵ����µ�������ѣ�
//void AdjustDown(vector<int>& v1, int n, int parent)
//{
//	//child��¼���Һ�����ֵ�ϴ�ĺ��ӵ��±�
//	int child = 2 * parent + 1;//��Ĭ�������ӵ�ֵ��С
//	while (child < n)
//	{
//		if (child + 1 < n && v1[child + 1] < v1[child])//�Һ��Ӵ��ڲ����Һ��ӱ�����С
//		{
//			child++;//�ϴ�ĺ��Ӹ�Ϊ�Һ���
//		}
//		if (v1[child] < v1[parent])//���Һ����н�С���ӵ�ֵ�ȸ���㻹С
//		{
//			//����������С���ӽ�㽻��
//			swap(v1[child], v1[parent]);
//
//			//�������½��е���
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
	// �ȽϷ�ʽ��ʹ�ڲ��ṹΪ��ѣ�
	template<class T>
	struct less
	{
		bool operator()(const T& x, const T& y) const
		{
			return x < y;
		}
	};

	// �ȽϷ�ʽ��ʹ�ڲ��ṹΪС�ѣ�
	template<class T>
	struct greater
	{
		bool operator()(const T& x, const T& y) const
		{
			return x > y;
		}
	};

	// ���ȼ����� --- ��� < --- С�� >
	template<class T, class Container = vector<T>, class Compare = less<T>>
	class priority_queue
	{
		Compare _comFunc; // �ȽϷ�ʽ
	public:
		// ����յ����ȼ�����
		priority_queue(const Compare& comFunc = Compare())
			:_comFunc(comFunc)
		{}

		// �Ե���������������
		template <class InputIterator>
		priority_queue(InputIterator first, InputIterator last, const Compare& comFunc = Compare())
			: _comFunc(comFunc)
		{
			while (first != last)
			{
				_con.push_back(*first);
				++first;
			}

			// ����
			for (int i = (_con.size() - 1 - 1) / 2; i >= 0; --i)
			{
				AdjustDown(i);
			}
		}

		// �ѵ����ϵ���
		void AdjustUp(int child)
		{
			int parent = (child - 1) / 2; // ͨ��child����parent���±�
			while (child > 0)
			{
				if (_comFunc(_con[parent], _con[child])) // ͨ�������ȽϷ�ʽȷ���Ƿ���Ҫ�������λ��
				{
					swap(_con[parent], _con[child]); // ��������뺢�ӽ�㽻��
					child = parent; //�������Ͻ��е���
					parent = (child - 1) / 2;
				}
				else
				{
					break;
				}
			}
		}

		// ����Ԫ�ص���β��������
		// ������β������Ԫ�غ����һ�����ϵ����㷨
		void push(const T& x)
		{
			_con.push_back(x);

			AdjustUp(_con.size() - 1);
		}

		// �ѵ����µ���
		void AdjustDown(int parent)
		{
			size_t child = parent * 2 + 1;
			while (child < _con.size())
			{
				if (child + 1 < _con.size() && _comFunc(_con[child], _con[child + 1]))
				{
					++child;
				}

				if (_comFunc(_con[parent], _con[child])) //ͨ�������ȽϷ�ʽȷ���Ƿ���Ҫ�������λ��
				{
					swap(_con[parent], _con[child]); //��������뺢�ӽ�㽻��
					parent = child; //�������½��е���
					child = parent * 2 + 1;
				}
				else
				{
					break;
				}
			}
		}

		// ɾ����ͷԪ�أ��Ѷ�Ԫ�أ�
		// ������ͷ����β��Ԫ�ؽ������ٽ�β��Ԫ��ɾ�������Ӹ���㿪ʼ����һ�����µ����㷨
		void pop()
		{
			assert(!_con.empty());
			swap(_con[0], _con[_con.size() - 1]);
			_con.pop_back();

			AdjustDown(0);
		}

		// ���ʶ�ͷԪ�أ��Ѷ�Ԫ�أ�
		const T& top()
		{
			return _con[0];
		}

		// ��ȡ��������ЧԪ�ظ���
		size_t size()
		{
			return _con.size();
		}

		// �ж϶����Ƿ�Ϊ��
		bool empty()
		{
			return _con.empty();
		}

	private:
		Container _con;
	};

	// ���Ժ���
	void test_priority_queue1()
	{
		priority_queue<int> pq1; // �������
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
	
	// ���Ժ���
	void test_priority_queue2()
	{
		priority_queue<int, vector<int>, greater<int>> pq2; // ����С��
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