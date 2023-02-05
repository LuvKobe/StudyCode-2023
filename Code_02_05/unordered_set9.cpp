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
//	// 插入元素
//	us1.insert(4);
//	us1.insert(5);
//	us1.insert(2);
//	us1.insert(2);
//	us1.insert(1);
//	us1.insert(3);
//	us1.insert(3);
//
//	// 遍历
//	for (auto e : us1)
//	{
//		cout << e << " ";
//	}
//}


//void test_unordered()
//{
//	unordered_set<int> us;
//
//	// 插入元素
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
//		cout << "3存在" << endl;
//	}
//}

//void test_unordered()
//{
//	unordered_set<int> us;
//
//	// 插入元素
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
//		us.erase(pos); // 删除元素3
//		cout << "删除成功" << endl;
//	}
//	else
//	{
//		cout << "删除失败" << endl;
//	}
//
//	// 遍历
//	for (auto e : us)
//	{
//		cout << e << " ";
//	}
//}


//void test_unordered()
//{
//	unordered_set<int> us;
//
//	// 插入元素
//	us.insert(4);
//	us.insert(5);
//	us.insert(2);
//	us.insert(2);
//	us.insert(1);
//	us.insert(3);
//	us.insert(3);
//
//	us.erase(5); // 删除元素5
//
//	// 遍历
//	for (auto e : us)
//	{
//		cout << e << " ";
//	}
//}


//void test_unordered()
//{
//	unordered_set<string> us;
//
//	// 构造元素
//	us = { "milk", "potatoes", "eggs" };
//	cout << "size: " << us.size() << endl;
//
//	// 插入元素
//	us.insert("pineapple");
//	cout << "size: " << us.size() << endl;
//
//	// 插入重复元素
//	us.insert("milk");
//	cout << "size: " << us.size() << endl;
//}


//void test_unordered()
//{
//	// us1构造3个元素
//	unordered_set<string> us1 = { "milk", "potatoes", "eggs" };
//
//	// us2构造一个空容器
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
//	// 遍历
//	for (const string& x : us)
//	{
//		cout << x << " ";
//	}
//	cout << endl;
//
//	// 清除容器中的所有元素
//	us.clear();
//
//	// 再重新插入一些元素
//	us.insert("bed");
//	us.insert("wardrobe");
//	us.insert("nightstand");
//
//	// 遍历
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
//	// 交换容器的内容
//	us1.swap(us2);
//
//	// 遍历us1
//	for (const string& x1 : us1)
//	{
//		cout << x1 << " ";
//	}
//	cout << endl;
//
//	// 遍历us2
//	for (const string& x2 : us2)
//	{
//		cout << x2 << " ";
//	}
//}


//void test_unordered()
//{
//	unordered_set<string> us = { "hat", "umbrella", "suit" };
//
//	// 容器中值为"hat"的元素个数
//	cout << us.count("hat") << endl;
//
//	// 容器中值为"red"的元素个数
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
//	// 遍历
//	for (auto e : ums)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	// 容器中存在多个2，那么返回第一个2位置的迭代器
//	auto pos = ums.find(2); 
//
//	// 打印2位置后面的所有元素（验证pos是否为第一个2位置的迭代器）
//	while (pos != ums.end())
//	{
//		cout << *pos << " ";
//		++pos;
//	}
//}



void test_unordered()
{
	unordered_multiset<int> ums;

	// 插入元素
	ums.insert(4);
	ums.insert(5);
	ums.insert(2);
	ums.insert(2);
	ums.insert(2);
	ums.insert(2);
	ums.insert(1);
	ums.insert(3);
	ums.insert(3);

	// 统计2的个数
	cout << ums.count(2) << endl;

	// 遍历
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

	// 统计3的个数
	cout << ms.count(3) << endl;

	// 遍历
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