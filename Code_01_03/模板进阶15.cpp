#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//#define N 100

//// ��̬ջ
//template<class T>
//class Stack
//{
//private:
//	int _a[N];
//	int _top;
//};
//
//int main()
//{
//	Stack<int> st1;
//	Stack<double> st1;
//
//	return 0;
//}


// ��̬ջ
//template<class T, size_t N>
//class Stack
//{
//private:
//	int _a[N];
//	int _top;
//};
//
//int main()
//{
//	Stack<int, 100> st1;
//	Stack<double, 500> st2;
//
//	return 0;
//}

#include "Date.h"

//// ����ģ�� -- ����ƥ��
//template<class T>
//bool Less(T left, T right)
//{
//	return left < right;
//}
//
//// ��Less����ģ������ػ�
//template<>
//bool Less<Date*>(Date* left, Date* right)
//{
//	return *left < *right;
//}


//Date* p1 = new Date(2022, 12, 23);
//Date* p2 = new Date(2022, 12, 24);
//cout << Less(p1, p2) << endl;
//
//Date* p3 = new Date(2022, 12, 20);
//Date* p4 = new Date(2022, 12, 10);
//cout << Less(p3, p4) << endl;

//// ȫ�ػ�
//template<>
//class Data<int, double>
//{
//public:
//	Data()
//	{
//		cout << "Data<int, double>" << endl;
//	}
//private:
//	int _d1;
//	double _d2;
//};


//// ����ģ��
//template<class T1, class T2>
//class Data
//{
//public:
//	Data()
//	{
//		cout << "Data<T1, T2>" << endl;
//	}
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
//// �����ػ� -- ����һ�������ػ�Ϊdouble
//template<class T2>
//class Data<double, T2>
//{
//public:
//	Data()
//	{
//		cout << "Data<double, T2>" << endl;
//	}
//private:
//	double _d1;
//	T2 _d2;
//};
//
////��������ƫ�ػ�Ϊָ������
//template <typename T1, typename T2>
//class Data <T1*, T2*>
//{
//public:
//	Data() 
//	{ 
//		cout << "Data<T1*, T2*>" << endl; 
//	}
//
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
////��������ƫ�ػ�Ϊ��������
//template <typename T1, typename T2>
//class Data <T1&, T2&>
//{
//public:
//	Data(const T1& d1, const T2& d2)
//		: _d1(d1)
//		, _d2(d2)
//	{
//		cout << "Data<T1&, T2&>" << endl;
//	}
//
//private:
//	const T1& _d1;
//	const T2& _d2;
//};
//
//int main()
//{
//	// ���û����İ汾
//	Data<int, int> d1; 
//
//	// ���ò����ػ���double�汾
//	Data<double, double> d2; 
//
//	// �����ػ���ָ��汾
//	Data<int*, int*> d3; 
//
//	// �����ػ������ð汾
//	Data<int&, int&> d4(2, 4); 
//
//
//	return 0;
//}

//#include "Date.h"
//#include<vector>
//#include <algorithm>
//
//// Lessģ�� --- �Ƚ�С��
//template<class T>
//struct Less
//{
//	bool operator()(const T& x, const T& y) const
//	{
//		return x < y;
//	}
//};
//
//// ��Less��ģ�尴��ָ�뷽ʽ�ػ�
//template<>
//struct Less<Date*>
//{
//	bool operator()(Date* x, Date* y) const
//	{
//		return *x < *y;
//	}
//};

//int main()
//{
//	Date d1(2022, 7, 7);
//	Date d2(2022, 7, 6);
//	Date d3(2022, 7, 8);
//
//	vector<Date*> v2;
//	v2.push_back(&d1);
//	v2.push_back(&d2);
//	v2.push_back(&d3);
//
//	// ����
//	sort(v2.begin(), v2.end(), Less<Date*>());
//
//	// ��ӡ
//	for (auto e : v2) {
//		cout << *e;
//	}
//
//	return 0;
//}

//int main()
//{
//	Date d1(2022, 7, 7);
//	Date d2(2022, 7, 6);
//	Date d3(2022, 7, 8);
//
//	vector<Date> v1;
//	v1.push_back(d1);
//	v1.push_back(d2);
//	v1.push_back(d3);
//
//	// ����ֱ�����򣬽������������
//	sort(v1.begin(), v1.end(), Less<Date>());
//
//	// ��ӡ
//	for (auto e : v1)
//	{
//		cout << e;
//	}
//
//	return 0;
//}






#include"a.hpp"

int main()
{
	Add(1, 2);
	Add(2.0, 2.0);
	
	cout << Add(1, 2) << endl;
	cout << Add(2.0, 2.0) << endl;

	return 0;
}

class A
{
public:
	virtual void func(int val = 1) { cout << "A->" << val << endl; }
	virtual void test() { func(); }
};

class B : public A
{
public:
	void func(int val = 0) { cout << "B->" << val << endl; }
};

int main()
{
	B* p = new B;
	p->test();

	return 0;
}
