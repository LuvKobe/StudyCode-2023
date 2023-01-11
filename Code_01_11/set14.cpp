#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <vector>
#include <set>

using namespace std;



//void testmap()
//{
//	set<int> s1; // 构造一个int类型的空容器
//
//	set<int> s2(s1); // 拷贝构造int类型s1容器的复制品
//
//	vector<int> v1 = { 1,2,3,4,5 };
//	set<int> s3(v1.begin(), v1.end());
//}

//void testmap()
//{
//	set<int> s;
//
//	// 插入元素
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(2);
//	s.insert(1);
//	s.insert(3);
//	s.insert(3);
//
//	// 遍历
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
//	// 插入元素
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
//		cout << "找到了" << endl;
//	}
//}

//void testmap()
//{
//	set<int> s;
//
//	// 插入元素
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
//		cout << "删除成功" << endl;
//	}
//	else
//	{
//		cout << "元素不存在" << endl;
//	}
//
//	// 遍历
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//}

//void testmap()
//{
//	set<int> s;
//
//	// 插入元素
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
//		s.erase(pos, s.end()); // 删除元素5
//		cout << "删除成功" << endl;
//	}
//	else
//	{
//		cout << "删除失败" << endl;
//	}
//
//	// 遍历
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//}

//void testmap()
//{
//	set<int> s;
//
//	// 插入元素
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
//	// 遍历
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
//	// 遍历
//	for (auto e1 : s1)
//	{
//		cout << e1 << " ";
//	}
//
//	cout << "s2:";
//	// 遍历
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
//	cout << s1.empty() << endl; // s1容器不为空,输出0
//
//	cout << s2.empty() << endl; // s2容器为空,输出1
//}

//void testmap()
//{
//	set<int> s;
//
//	// 插入元素
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(1);
//	s.insert(6);
//	s.insert(3);
//	s.insert(8);
//	s.insert(7);
//
//	// 元素3的个数
//	cout << s.count(3) << endl;
//
//	// 元素7的个数
//	cout << s.count(10) << endl;
//}

//void testmap()
//{
//	set<int> s;
//
//	// 插入元素
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(1);
//	s.insert(3);
//	s.insert(8);
//	s.insert(7);
//
//	// 如果3存在就返回3位置的迭代器
//	auto lowIt = s.lower_bound(3);
//	cout << *lowIt << endl;
//
//	// 如果6不存在就返回比6大的位置的迭代器
//	lowIt = s.lower_bound(6);
//	cout << *lowIt << endl;
//}

//void testmap()
//{
//	set<int> s;
//
//	// 插入元素
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(1);
//	s.insert(3);
//	s.insert(8);
//	s.insert(7);
//
//	// 删除大于等于4的所有值
//	auto lowIt = s.lower_bound(4);
//	s.erase(lowIt, s.end());
//
//	// 遍历
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//}


//void testmap()
//{
//	set<int> s;
//
//	// 插入元素
//	s.insert(4);
//	s.insert(5);
//	s.insert(2);
//	s.insert(6);
//	s.insert(1);
//	s.insert(3);
//	s.insert(8);
//	s.insert(7);
//
//	// 删除 [3, 7] 这段区间中的所有数
//	auto leftIt = s.lower_bound(3); // 返回3位置的迭代器
//	auto rightIt = s.upper_bound(7); // 返回8位置的迭代器
//
//	s.erase(leftIt, rightIt);
//
//	// 遍历
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
//	auto pos = ms.find(5); // 多个5的话,返回中序第一个5
//
//	// 打印pos位置后面的所有元素
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

	// 统计3的个数
	cout << ms.erase(3) << endl;

	// 遍历
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