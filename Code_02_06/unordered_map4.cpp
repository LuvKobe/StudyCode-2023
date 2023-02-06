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
//	unordered_map<string, int> um1({ {"apple", 1}, {"lemon", 2}});
//	unordered_map<string, int> um3(um1.begin(), um1.end());
//	unordered_map<string, int> um2(um1);
//
//}

//void test_unordered()
//{
//	// 构造对象
//	unordered_map<string, double> um({ {"apple", 1.0}, {"lemon", 2.0} });
//
//	// 构造匿名对象插入新元素
//	um.insert(pair<string, double>("milk", 2.0));
//	um.insert(pair<string, double>("eggs", 6.5));
//	um.insert(pair<string, double>("sugar", 0.8));
//
//	// 遍历
//	for (auto e : um)
//	{
//		cout << e.first << ": " << e.second << endl;
//	}
//}

//um.insert({ {"vegetables", 5.2}, {"salt", 0.1} });

//void test_unordered()
//{
//	// 构造对象
//	unordered_map<string, double> um({ {"apple", 1.0}, {"lemon", 2.0} });
//
//	// 调用make_pair函数模板插入新元素
//	um.insert(make_pair("milk", 2.0));
//	um.insert(make_pair("eggs", 6.5));
//	um.insert(make_pair("sugar", 0.8));
//
//	// 遍历
//	for (auto e : um)
//	{
//		cout << e.first << ": " << e.second << endl;
//	}
//}


//void test_unordered()
//{
//	// 构造对象
//	unordered_map<string, double> um({ {"apple", 1.0}, {"lemon", 2.0} });
//
//	// 初始化列表插入新元素
//	um.insert({ "sugar", 0.8 });
//	um.insert({ "eggs", 6.5 });
//	um.insert({ "salt", 0.1 } );
//
//	// 遍历
//	for (auto e : um)
//	{
//		cout << e.first << ": " << e.second << endl;
//	}
//}



//void test_unordered()
//{
//	// 构造对象
//	unordered_map<string, double> um;
//
//	// 利用[]运算符重载函数进行插入
//	um["apple"] = 1.5;
//	um["lemon"] = 2.0;
//	um["sugar"] = 0.8;
//
//	// 利用[]运算符重载函数修改value
//	um["apple"] = 8.88;
//
//	// 遍历
//	for (auto e : um)
//	{
//		cout << e.first << ": " << e.second << endl;
//	}
//}


//void test_unordered()
//{
//	// 构造对象
//	unordered_map<string, double> um;
//
//	// 利用[]运算符重载函数进行插入
//	um["mom"] = 5.4;
//	um["dad"] = 6.1;
//	um["bro"] = 5.9;
//
//	// 查找"dad"
//	auto pos = um.find("dad");
//
//	if (pos != um.end())
//	{
//		cout << pos->first << " is " << pos->second;
//	}
//	else
//	{
//		cout << "not found" << endl;
//	}
//
//}


//void test_unordered()
//{
//	// 构造对象
//	unordered_map<string, string> um;
//
//	// 填充容器
//	um["U.S."] = "Washington";
//	um["U.K."] = "London";
//	um["France"] = "Paris";
//	um["Russia"] = "Moscow";
//	um["China"] = "Beijing";
//	um["Germany"] = "Berlin";
//	um["Japan"] = "Tokyo";
//
//	// 查找"Russia"的位置
//	auto pos = um.find("Russia");
//
//	if (pos != um.end())
//	{
//		um.erase(pos);
//		cout << "delete success" << endl;
//	}
//	else
//	{
//		cout << "not found" << endl;
//	}
//}


//void test_unordered()
//{
//	// 构造对象
//	unordered_map<string, string> um;
//
//	// 填充容器
//	um["U.S."] = "Washington";
//	um["U.K."] = "London";
//	um["France"] = "Paris";
//	um["Russia"] = "Moscow";
//	um["China"] = "Beijing";
//	um["Germany"] = "Berlin";
//	um["Japan"] = "Tokyo";
//
//	// 直接删除"Japan"
//	um.erase("Japan");
//
//	// 遍历
//	for (auto e : um)
//	{
//		cout << e.first << ": " << e.second << endl;
//	}
//	
//}


//void test_unordered()
//{
//	// 构造对象
//	unordered_map<string, string> um;
//
//	// 填充容器
//	um["U.S."] = "Washington";
//	um["U.K."] = "London";
//	um["France"] = "Paris";
//	um["Russia"] = "Moscow";
//	um["China"] = "Beijing";
//	um["Germany"] = "Berlin";
//	um["Japan"] = "Tokyo";
//
//	// 查找"France"的位置
//	auto pos = um.find("France");
//
//	// 删除从"France"开始后面所有的元素
//	um.erase(pos, um.end());
//
//	// 遍历
//	for (auto e : um)
//	{
//		cout << e.first << ": " << e.second << endl;
//	}
//}


//void test_unordered()
//{
//	// 构造对象
//	unordered_map<string, double> um = { 
//		{"milk", 2.30}, 
//		{"potatoes", 1.90}, 
//		{"eggs", 0.40} 
//	};
//
//	cout << "size: " << um.size() << endl;
//
//	// 插入重复元素
//	um["milk"] = 5.80;
//	cout << "size: " << um.size() << endl;
//}


//void test_unordered()
//{
//	unordered_map<int, int> um1; // 构造空容器
//	unordered_map<int, int> um2 = { {1,10},{2,20},{3,30} }; // 构造非空容器
//
//	// um1是空容器，所以结果为真
//	cout << "um1 " << (um1.empty() ? "is empty" : "is not empty") << endl;
//
//	// um2不是空容器，所以结果为假
//	cout << "um2 " << (um2.empty() ? "is empty" : "is not empty") << endl;
//}

//void test_unordered()
//{
//	// 初始化容器
//	unordered_map<string, string> um1 = {
//		{"house","maison"},
//		{"car","voiture"},
//		{"grapefruit","pamplemousse"}
//	};
//
//	// 清空容器
//	um1.clear();
//
//	// 重新插入数据
//	um1["hello"] = "bonjour";
//	um1["sun"] = "soleil";
//
//	// 遍历
//	for (auto& x : um1)
//	{
//		cout << x.first << "=" << x.second << endl;
//	}
//}


//void test_unordered()
//{
//	// 初始化um1和um2容器
//	unordered_map<string, string>
//		um1 = { {"Star Wars","G"},{"Alien","R"} },
//		um2 = { {"Inception","C"},{"Donnie Darko","R"} };
//
//	// 交换两个容器的内容
//	um1.swap(um2);
//
//	// 遍历um1
//	cout << "um1: ";
//	for (auto& x : um1)
//	{
//		cout << x.first << "-" << x.second << ", ";
//	}
//	cout << endl;
//
//	// 遍历um2
//	cout << "um2: ";
//	for (auto& x : um2)
//	{
//		cout << x.first << "-" << x.second << ", ";
//	}
//}



//void test_unordered()
//{
//	// 初始化容器
//	unordered_map<string, double> um = { 
//		{"Burger",2.99}, 
//		{"Fries",1.99}, 
//		{"Soda",1.50} 
//	};
//
//	// 在um中查找下列的数据
//	for (auto& x : { "Burger","Pizza","Salad","Soda" }) 
//	{
//		if (um.count(x) > 0)
//			std::cout << "um has " << x << std::endl;
//		else
//			std::cout << "um has no " << x << std::endl;
//	}
//}


//void test_unordered()
//{
//	// 初始化容器
//	unordered_multimap<int, string> umm;
//
//	// 插入键值对，允许重复
//	umm.insert(make_pair(2023, "跑步"));
//	umm.insert({ 2023, "打球" });
//	umm.insert({ 2023,"玩游戏" });
//
//	// 遍历umm
//	for (auto x : umm)
//	{
//		cout << x.first << ": " << x.second << endl;
//	}
//}


//void test_unordered()
//{
//	// 初始化容器
//	unordered_multimap<string, string> umm;
//
//	// 插入键值对，允许重复
//	umm.insert({ "mom", "妈妈" });
//	umm.insert({ "mom", "母亲" });
//	umm.insert({ "dad", "父亲" });
//	umm.insert({ "bro", "兄弟" });
//
//	// 查找第一个"mom"的key，并输出对应的value
//	cout << "one of the values for 'mom' is: ";
//	cout << umm.find("mom")->second;
//}


void test_unordered()
{
	// 初始化容器
	unordered_multimap<string, string> umm = {
		{"orange","FL"},
		{"strawberry","LA"},
		{"strawberry","OK"},
		{"pumpkin","NH"} 
	};

	// 统计下面三个单词在容器中出现的次数
	for (auto& x : { "orange","lemon","strawberry" }) 
	{
		cout << x << ": " << umm.count(x) << " 次" << endl;
	}
}







int main()
{
	test_unordered();

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