#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

//void testmap()
//{
//	// 构造一个key为string类型，value为int类型的空容器
//	map<string, int> m1;
//
//	// 拷贝构造key为string类型，value为int类型的m1容器的复制品
//	map<string, int> m2(m1); 
//
//	// 使用迭代器拷贝构造m2容器某段区间的复制品
//	map<string, int> m3(m2.begin(), m2.end());
//}


//void testmap()
//{
//	map<string, string> dict;
//
//	// 调用pair的构造函数，构造一个匿名对象插入
//	dict.insert(pair<string, string>("sort", "排序"));
//	dict.insert(pair<string, string>("root", "根"));
//	dict.insert(pair<string, string>("left", "左边"));
//
//	// 遍历
//	for (auto e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//}


//void testmap()
//{
//	map<string, string> dict;
//
//	// 调用pair的构造函数，构造一个匿名对象插入
//	dict.insert(make_pair("sort", "排序"));
//	dict.insert(make_pair("root", "根"));
//	dict.insert(make_pair("left", "左边"));
//	dict.insert(make_pair("up", "上面"));
//
//	// 遍历
//	for (auto e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//}


//void testmap()
//{
//	string arr[] = { "苹果", "西瓜", "苹果", "西瓜", "苹果", "苹果", "西瓜", "苹果", "香蕉", "苹果", "香蕉" };
//
//	map<string, int> countFruit;
//	for (auto& str : arr)
//	{
//		map<string, int>::iterator it = countFruit.find(str);
//		if (it != countFruit.end())
//		{
//			it->second++;
//		}
//		else
//		{
//			countFruit.insert(make_pair(str, 1));
//		}
//	}
//
//	// 遍历
//	for (const auto& kv : countFruit)
//	{
//		cout << kv.first << ":" << kv.second << endl;
//	}
//}


//void testmap()
//{
//	string arr[] = { "苹果", "西瓜", "苹果", "西瓜", "苹果", "苹果", "西瓜", "苹果", "香蕉", "苹果", "香蕉" };
//
//	map<string, int> countFruit;
//	for (auto& str : arr)
//	{
//		pair<map<string, int>::iterator, bool> ret = countFruit.insert(make_pair(str, 1));
//		//auto ret = countFruit.insert(make_pair(str, 1));
//		if (ret.second == false)
//		{
//			ret.first->second++;
//		}
//	}
//
//	// 遍历
//	for (const auto& kv : countFruit)
//	{
//		cout << kv.first << ":" << kv.second << endl;
//	}
//}



//void testmap()
//{
//	string arr[] = { "苹果", "西瓜", "苹果", "西瓜", "苹果", "苹果", "西瓜", "苹果", "香蕉", "苹果", "香蕉" };
//
//	map<string, int> countFruit;
//	for (auto& str : arr)
//	{
//		countFruit[str]++; 
//	}
//
//	// 遍历
//	for (const auto& kv : countFruit)
//	{
//		cout << kv.first << ":" << kv.second << endl;
//	}
//}



//void testmap()
//{
//	map<string, string> dict;
//	
//	// 用make_pair函数来构造键值对
//	dict.insert(make_pair("sort", "排序"));
//	dict.insert(make_pair("root", "根"));
//	dict.insert(make_pair("left", "左边"));
//	
//	dict["up"] = "向上"; // up不存在,那么就插入up元素并修改(插入+修改)
//	dict["left"] = "剩余"; // left存在,那么只修改(查找+修改)
//	dict["erase"]; // erase不存在,那么插入
//	
//	// 遍历
//	for (auto e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//}


//void testmap()
//{
//	map<string, string> dict;
//	
//	// 用make_pair函数来构造键值对
//	dict["sort"] = "排序";
//	dict["up"] = "向上";;
//	dict["left"] = "左边";
//	dict["root"] = "根";
//	
//	auto pos = dict.find("root");
//	if (pos != dict.end())
//	{
//		cout << "找到了" << endl;
//		cout << pos->first << ":" << pos->second << endl;
//	}
//}


//void testmap()
//{
//	map<string, string> dict;
//
//	// 用make_pair函数来构造键值对
//	dict["sort"] = "排序";
//	dict["up"] = "向上";;
//	dict["left"] = "左边";
//	dict["root"] = "根";
//
//	auto pos = dict.find("root");
//	if (pos != dict.end())
//	{
//		dict.erase(pos, dict.end()); // 删除从pos位置开始后面所有的元素
//		cout << "删除成功" << endl;
//	}
//
//	// 遍历
//	for (auto e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//}



//void testmap()
//{
//	map<string, string> dict1;
//	dict1["sort"] = "排序";
//	dict1["up"] = "向上";;
//	dict1["left"] = "左边";
//	dict1["root"] = "根";
//
//	map<string, string> dict2;
//	dict2["size"] = "大小";
//	dict2["erase"] = "删除";
//	dict2["clear"] = "清除";
//	dict2["insert"] = "插入";;
//
//	dict1.swap(dict2); // 交换两个对象中的元素
//
//	for (auto e1 : dict1)
//	{
//		cout << e1.first << ":" << e1.second << endl;
//	}
//	cout << endl;
//
//	for (auto e2 : dict2)
//	{
//		cout << e2.first << ":" << e2.second << endl;
//	}
//}


//void testmap()
//{
//	map<string, string> dict1;
//	dict1["sort"] = "排序";
//	dict1["up"] = "向上";;
//	dict1["left"] = "左边";
//	dict1["root"] = "根";
//
//	map<string, string> dict2;
//
//	cout << dict1.empty() << endl; // 不为空,返回false
//
//	cout << dict2.empty() << endl; // 为空,返回true
//}


//void testmultimap()
//{
//	multimap<string, string> dict;
//	dict.insert(make_pair("sort", "排序"));
//	dict.insert(make_pair("up", "向上"));
//	dict.insert(make_pair("left", "左边"));
//	dict.insert(make_pair("root", "根"));
//	dict.insert(make_pair("sort", "排序"));
//	dict.insert(make_pair("root", "原因"));
//	dict.insert(make_pair("hello", "您好"));
//	dict.insert(make_pair("root", "路径"));
//
//	// 遍历
//	for (auto e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//
//	auto pos = dict.find("root"); // 多个root的话,返回中序第一个root
//
//	// 打印pos位置后面的所有元素
//	while (pos != dict.end())
//	{
//		cout << pos->first << ":" << pos->second << endl;
//		++pos;
//	}
//}


//void testmap()
//{
//	multimap<string, string> dict;
//	dict.insert(make_pair("sort", "排序"));
//	dict.insert(make_pair("up", "向上"));
//	dict.insert(make_pair("left", "左边"));
//	dict.insert(make_pair("root", "根"));
//	dict.insert(make_pair("sort", "排序"));
//	dict.insert(make_pair("root", "原因"));
//	dict.insert(make_pair("hello", "您好"));
//	dict.insert(make_pair("root", "路径"));
//
//	// 统计root的元素个数
//	cout << dict.count("root") << endl;
//
//	// 遍历
//	for (auto e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//}

void testmap()
{
	string words[] = { "i", "love", "leetcode", "i", "love", "coding" };

	map<string, int> countMap;
	for (auto& str : words)
	{
		countMap[str]++;
	}

	// 按照单词出现次数(int)进行降序排列
	multimap<int, string, greater<int>> sortMap;
	for (auto& kv : countMap)
	{
		sortMap.insert(make_pair(kv.second, kv.first));
	}

	// 遍历
	for (auto e : sortMap)
	{
		cout << e.first << ":" << e.second << endl;
	}
}


int main()
{
	testmap();

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