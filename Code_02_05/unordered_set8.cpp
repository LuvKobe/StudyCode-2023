#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <unordered_set>
#include <unordered_map>

using namespace std;

//void test_unordered()
//{
//	unordered_set<int> us1;
//	unordered_set<int> us2(us1);
//	string str("helloworld");
//	unordered_set<char> us3(str.begin(), str.end());
//}



//void test_unordered()
//{
//	unordered_set<int> us1;
//
//	// ����Ԫ��
//	us1.insert(4);
//	us1.insert(5);
//	us1.insert(2);
//	us1.insert(2);
//	us1.insert(1);
//	us1.insert(3);
//	us1.insert(3);
//
//	// ����
//	for (auto e : us1)
//	{
//		cout << e << " ";
//	}
//}


//void test_unordered()
//{
//	unordered_set<int> us;
//
//	// ����Ԫ��
//	us.insert(4);
//	us.insert(5);
//	us.insert(2);
//	us.insert(2);
//	us.insert(1);
//	us.insert(3);
//	us.insert(3);
//
//	unordered_set<int>::iterator pos = us.find(3);
//	if (pos != us.end())
//	{
//		cout << "3����" << endl;
//	}
//}

//void test_unordered()
//{
//	unordered_set<int> us;
//
//	// ����Ԫ��
//	us.insert(4);
//	us.insert(5);
//	us.insert(2);
//	us.insert(2);
//	us.insert(1);
//	us.insert(3);
//	us.insert(3);
//
//	unordered_set<int>::iterator pos = us.find(3);
//	if (pos != us.end())
//	{
//		us.erase(pos); // ɾ��Ԫ��3
//		cout << "ɾ���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "ɾ��ʧ��" << endl;
//	}
//
//	// ����
//	for (auto e : us)
//	{
//		cout << e << " ";
//	}
//}


//void test_unordered()
//{
//	unordered_set<int> us;
//
//	// ����Ԫ��
//	us.insert(4);
//	us.insert(5);
//	us.insert(2);
//	us.insert(2);
//	us.insert(1);
//	us.insert(3);
//	us.insert(3);
//
//	us.erase(5); // ɾ��Ԫ��5
//
//	// ����
//	for (auto e : us)
//	{
//		cout << e << " ";
//	}
//}


//void test_unordered()
//{
//	unordered_set<string> us;
//
//	// ����Ԫ��
//	us = { "milk", "potatoes", "eggs" };
//	cout << "size: " << us.size() << endl;
//
//	// ����Ԫ��
//	us.insert("pineapple");
//	cout << "size: " << us.size() << endl;
//
//	// �����ظ�Ԫ��
//	us.insert("milk");
//	cout << "size: " << us.size() << endl;
//}


//void test_unordered()
//{
//	// us1����3��Ԫ��
//	unordered_set<string> us1 = { "milk", "potatoes", "eggs" };
//
//	// us2����һ��������
//	unordered_set<string> us2;
//
//
//	cout << "us1 " << (us1.empty() ? "is empty" : "is not empty") << endl;
//	cout << "us2 " << (us2.empty() ? "is empty" : "is not empty") << endl;
//
//}


//void test_unordered()
//{
//	unordered_set<string> us = { "chair", "table", "lamp", "sofa" };
//
//	// ����
//	for (const string& x : us)
//	{
//		cout << x << " ";
//	}
//	cout << endl;
//
//	// ��������е�����Ԫ��
//	us.clear();
//
//	// �����²���һЩԪ��
//	us.insert("bed");
//	us.insert("wardrobe");
//	us.insert("nightstand");
//
//	// ����
//	for (const string& x : us)
//	{
//		cout << x << " ";
//	}
//	cout << endl;
//}


//void test_unordered()
//{
//	unordered_set<string> us1 = { "iron","copper","oil" };
//	unordered_set<string> us2 = { "wood","corn","milk" };
//
//	// ��������������
//	us1.swap(us2);
//
//	// ����us1
//	for (const string& x1 : us1)
//	{
//		cout << x1 << " ";
//	}
//	cout << endl;
//
//	// ����us2
//	for (const string& x2 : us2)
//	{
//		cout << x2 << " ";
//	}
//}


//void test_unordered()
//{
//	unordered_set<string> us = { "hat", "umbrella", "suit" };
//
//	// ������ֵΪ"hat"��Ԫ�ظ���
//	cout << us.count("hat") << endl;
//
//	// ������ֵΪ"red"��Ԫ�ظ���
//	cout << us.count("red") << endl;
//}


//void test_unordered()
//{
//	unordered_multiset<int> ums;
//	ums.insert(4);
//	ums.insert(5);
//	ums.insert(6);
//	ums.insert(2);
//	ums.insert(2);
//	ums.insert(1);
//	ums.insert(3);
//	ums.insert(3);
//
//	// ����
//	for (auto e : ums)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	// �����д��ڶ��2����ô���ص�һ��2λ�õĵ�����
//	auto pos = ums.find(2); 
//
//	// ��ӡ2λ�ú��������Ԫ�أ���֤pos�Ƿ�Ϊ��һ��2λ�õĵ�������
//	while (pos != ums.end())
//	{
//		cout << *pos << " ";
//		++pos;
//	}
//}



void test_unordered()
{
	unordered_multiset<int> ums;

	// ����Ԫ��
	ums.insert(4);
	ums.insert(5);
	ums.insert(2);
	ums.insert(2);
	ums.insert(2);
	ums.insert(2);
	ums.insert(1);
	ums.insert(3);
	ums.insert(3);

	// ͳ��2�ĸ���
	cout << ums.count(2) << endl;

	// ����
	for (auto e : ums)
	{
		cout << e << " ";
	}
}

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

	// ͳ��3�ĸ���
	cout << ms.count(3) << endl;

	// ����
	for (auto e : ms)
	{
		cout << e << " ";
	}
}

int main()
{

	//test_unordered();
	testmultiset();

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