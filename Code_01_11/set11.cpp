#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
#include <set>

using namespace std;



//void testmap()
//{
//	set<int> s1; // ����һ��int���͵Ŀ�����
//
//	set<int> s2(s1); // ��������int����s1�����ĸ���Ʒ
//
//	vector<int> v1 = { 1,2,3,4,5 };
//	set<int> s3(v1.begin(), v1.end());
//}

//void testmap()
//{
//	set<int> s;
//
//	// ����Ԫ��
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(2);
//	s.insert(1);
//	s.insert(3);
//	s.insert(3);
//
//	// ����
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//
//}

//void testmap()
//{
//	set<int> s;
//
//	// ����Ԫ��
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(2);
//	s.insert(1);
//	s.insert(3);
//	s.insert(3);
//
//	auto pos = s.find(5);
//	if (pos != s.end())
//	{
//		cout << "�ҵ���" << endl;
//	}
//}

//void testmap()
//{
//	set<int> s;
//
//	// ����Ԫ��
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(2);
//	s.insert(1);
//	s.insert(3);
//	s.insert(3);
//
//	auto pos = s.find(5);
//	if (pos != s.end())
//	{
//		s.erase(pos);
//		cout << "ɾ���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "Ԫ�ز�����" << endl;
//	}
//
//	// ����
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//}

//void testmap()
//{
//	set<int> s;
//
//	// ����Ԫ��
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(1);
//	s.insert(6);
//	s.insert(3);
//	s.insert(8);
//	s.insert(7);
//
//	auto pos = s.find(5);
//	if (pos != s.end())
//	{
//		s.erase(pos, s.end()); // ɾ��Ԫ��5
//		cout << "ɾ���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "ɾ��ʧ��" << endl;
//	}
//
//	// ����
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//}

//void testmap()
//{
//	set<int> s;
//
//	// ����Ԫ��
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(1);
//	s.insert(6);
//	s.insert(3);
//	s.insert(8);
//	s.insert(7);
//
//	s.erase(5);
//
//	// ����
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//}

//void testmap()
//{
//	set<int> s1;
//	s1.insert(4);
//	s1.insert(5);
//	s1.insert(2);
//	s1.insert(1);
//
//	set<int> s2;
//	s2.insert(6);
//	s2.insert(3);
//	s2.insert(8);
//	s2.insert(7);
//
//	s1.swap(s2);
//
//	cout << "s1:";
//	// ����
//	for (auto e1 : s1)
//	{
//		cout << e1 << " ";
//	}
//
//	cout << "s2:";
//	// ����
//	for (auto e2 : s2)
//	{
//		cout << e2 << " ";
//	}
//}



//void testmap()
//{
//	set<int> s1;
//	s1.insert(4);
//	s1.insert(5);
//	s1.insert(2);
//	s1.insert(1);
//
//	set<int> s2;
//
//	cout << s1.empty() << endl; // s1������Ϊ��,���0
//
//	cout << s2.empty() << endl; // s2����Ϊ��,���1
//}

//void testmap()
//{
//	set<int> s;
//
//	// ����Ԫ��
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(1);
//	s.insert(6);
//	s.insert(3);
//	s.insert(8);
//	s.insert(7);
//
//	// Ԫ��3�ĸ���
//	cout << s.count(3) << endl;
//
//	// Ԫ��7�ĸ���
//	cout << s.count(10) << endl;
//}

//void testmap()
//{
//	set<int> s;
//
//	// ����Ԫ��
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(1);
//	s.insert(3);
//	s.insert(8);
//	s.insert(7);
//
//	// ���3���ھͷ���3λ�õĵ�����
//	auto lowIt = s.lower_bound(3);
//	cout << *lowIt << endl;
//
//	// ���6�����ھͷ��ر�6���λ�õĵ�����
//	lowIt = s.lower_bound(6);
//	cout << *lowIt << endl;
//}

//void testmap()
//{
//	set<int> s;
//
//	// ����Ԫ��
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(1);
//	s.insert(3);
//	s.insert(8);
//	s.insert(7);
//
//	// ɾ�����ڵ���4������ֵ
//	auto lowIt = s.lower_bound(4);
//	s.erase(lowIt, s.end());
//
//	// ����
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//}


//void testmap()
//{
//	set<int> s;
//
//	// ����Ԫ��
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(6);
//	s.insert(1);
//	s.insert(3);
//	s.insert(8);
//	s.insert(7);
//
//	// ɾ�� [3, 7] ��������е�������
//	auto leftIt = s.lower_bound(3); // ����3λ�õĵ�����
//	auto rightIt = s.upper_bound(7); // ����8λ�õĵ�����
//
//	s.erase(leftIt, rightIt);
//
//	// ����
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//}

//void testmultiset()
//{
//	multiset<int> ms;
//	ms.insert(4);
//	ms.insert(5);
//	ms.insert(2);
//	ms.insert(2);
//	ms.insert(5);
//	ms.insert(7);
//	ms.insert(1);
//	ms.insert(5);
//	ms.insert(6);
//	ms.insert(5);
//	ms.insert(3);
//	ms.insert(3);
//
//	for (auto e : ms)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	auto pos = ms.find(5); // ���5�Ļ�,���������һ��5
//
//	// ��ӡposλ�ú��������Ԫ��
//	while (pos != ms.end())
//	{
//		cout << *pos << " ";
//		++pos;
//	}
//}



void testmultiset()
{
	multiset<int> ms;
	ms.insert(4);
	ms.insert(3);
	ms.insert(2);
	ms.insert(2);
	ms.insert(5);
	ms.insert(7);
	ms.insert(1);
	ms.insert(3);
	ms.insert(6);
	ms.insert(5);
	ms.insert(3);
	ms.insert(3);

	// ͳ��3�ĸ���
	cout << ms.erase(3) << endl;

	// ����
	for (auto e : ms)
	{
		cout << e << " ";
	}
}


int main()
{
	//testmap();
	testmultiset();


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