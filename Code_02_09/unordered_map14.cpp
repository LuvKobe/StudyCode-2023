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
//	// �������
//	unordered_map<string, double> um({ {"apple", 1.0}, {"lemon", 2.0} });
//
//	// �����������������Ԫ��
//	um.insert(pair<string, double>("milk", 2.0));
//	um.insert(pair<string, double>("eggs", 6.5));
//	um.insert(pair<string, double>("sugar", 0.8));
//
//	// ����
//	for (auto e : um)
//	{
//		cout << e.first << ": " << e.second << endl;
//	}
//}

//um.insert({ {"vegetables", 5.2}, {"salt", 0.1} });

//void test_unordered()
//{
//	// �������
//	unordered_map<string, double> um({ {"apple", 1.0}, {"lemon", 2.0} });
//
//	// ����make_pair����ģ�������Ԫ��
//	um.insert(make_pair("milk", 2.0));
//	um.insert(make_pair("eggs", 6.5));
//	um.insert(make_pair("sugar", 0.8));
//
//	// ����
//	for (auto e : um)
//	{
//		cout << e.first << ": " << e.second << endl;
//	}
//}


//void test_unordered()
//{
//	// �������
//	unordered_map<string, double> um({ {"apple", 1.0}, {"lemon", 2.0} });
//
//	// ��ʼ���б������Ԫ��
//	um.insert({ "sugar", 0.8 });
//	um.insert({ "eggs", 6.5 });
//	um.insert({ "salt", 0.1 } );
//
//	// ����
//	for (auto e : um)
//	{
//		cout << e.first << ": " << e.second << endl;
//	}
//}



//void test_unordered()
//{
//	// �������
//	unordered_map<string, double> um;
//
//	// ����[]��������غ������в���
//	um["apple"] = 1.5;
//	um["lemon"] = 2.0;
//	um["sugar"] = 0.8;
//
//	// ����[]��������غ����޸�value
//	um["apple"] = 8.88;
//
//	// ����
//	for (auto e : um)
//	{
//		cout << e.first << ": " << e.second << endl;
//	}
//}


//void test_unordered()
//{
//	// �������
//	unordered_map<string, double> um;
//
//	// ����[]��������غ������в���
//	um["mom"] = 5.4;
//	um["dad"] = 6.1;
//	um["bro"] = 5.9;
//
//	// ����"dad"
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
//	// �������
//	unordered_map<string, string> um;
//
//	// �������
//	um["U.S."] = "Washington";
//	um["U.K."] = "London";
//	um["France"] = "Paris";
//	um["Russia"] = "Moscow";
//	um["China"] = "Beijing";
//	um["Germany"] = "Berlin";
//	um["Japan"] = "Tokyo";
//
//	// ����"Russia"��λ��
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
//	// �������
//	unordered_map<string, string> um;
//
//	// �������
//	um["U.S."] = "Washington";
//	um["U.K."] = "London";
//	um["France"] = "Paris";
//	um["Russia"] = "Moscow";
//	um["China"] = "Beijing";
//	um["Germany"] = "Berlin";
//	um["Japan"] = "Tokyo";
//
//	// ֱ��ɾ��"Japan"
//	um.erase("Japan");
//
//	// ����
//	for (auto e : um)
//	{
//		cout << e.first << ": " << e.second << endl;
//	}
//	
//}


//void test_unordered()
//{
//	// �������
//	unordered_map<string, string> um;
//
//	// �������
//	um["U.S."] = "Washington";
//	um["U.K."] = "London";
//	um["France"] = "Paris";
//	um["Russia"] = "Moscow";
//	um["China"] = "Beijing";
//	um["Germany"] = "Berlin";
//	um["Japan"] = "Tokyo";
//
//	// ����"France"��λ��
//	auto pos = um.find("France");
//
//	// ɾ����"France"��ʼ�������е�Ԫ��
//	um.erase(pos, um.end());
//
//	// ����
//	for (auto e : um)
//	{
//		cout << e.first << ": " << e.second << endl;
//	}
//}


//void test_unordered()
//{
//	// �������
//	unordered_map<string, double> um = { 
//		{"milk", 2.30}, 
//		{"potatoes", 1.90}, 
//		{"eggs", 0.40} 
//	};
//
//	cout << "size: " << um.size() << endl;
//
//	// �����ظ�Ԫ��
//	um["milk"] = 5.80;
//	cout << "size: " << um.size() << endl;
//}


//void test_unordered()
//{
//	unordered_map<int, int> um1; // ���������
//	unordered_map<int, int> um2 = { {1,10},{2,20},{3,30} }; // ����ǿ�����
//
//	// um1�ǿ����������Խ��Ϊ��
//	cout << "um1 " << (um1.empty() ? "is empty" : "is not empty") << endl;
//
//	// um2���ǿ����������Խ��Ϊ��
//	cout << "um2 " << (um2.empty() ? "is empty" : "is not empty") << endl;
//}

//void test_unordered()
//{
//	// ��ʼ������
//	unordered_map<string, string> um1 = {
//		{"house","maison"},
//		{"car","voiture"},
//		{"grapefruit","pamplemousse"}
//	};
//
//	// �������
//	um1.clear();
//
//	// ���²�������
//	um1["hello"] = "bonjour";
//	um1["sun"] = "soleil";
//
//	// ����
//	for (auto& x : um1)
//	{
//		cout << x.first << "=" << x.second << endl;
//	}
//}


//void test_unordered()
//{
//	// ��ʼ��um1��um2����
//	unordered_map<string, string>
//		um1 = { {"Star Wars","G"},{"Alien","R"} },
//		um2 = { {"Inception","C"},{"Donnie Darko","R"} };
//
//	// ������������������
//	um1.swap(um2);
//
//	// ����um1
//	cout << "um1: ";
//	for (auto& x : um1)
//	{
//		cout << x.first << "-" << x.second << ", ";
//	}
//	cout << endl;
//
//	// ����um2
//	cout << "um2: ";
//	for (auto& x : um2)
//	{
//		cout << x.first << "-" << x.second << ", ";
//	}
//}



//void test_unordered()
//{
//	// ��ʼ������
//	unordered_map<string, double> um = { 
//		{"Burger",2.99}, 
//		{"Fries",1.99}, 
//		{"Soda",1.50} 
//	};
//
//	// ��um�в������е�����
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
//	// ��ʼ������
//	unordered_multimap<int, string> umm;
//
//	// �����ֵ�ԣ������ظ�
//	umm.insert(make_pair(2023, "�ܲ�"));
//	umm.insert({ 2023, "����" });
//	umm.insert({ 2023,"����Ϸ" });
//
//	// ����umm
//	for (auto x : umm)
//	{
//		cout << x.first << ": " << x.second << endl;
//	}
//}


//void test_unordered()
//{
//	// ��ʼ������
//	unordered_multimap<string, string> umm;
//
//	// �����ֵ�ԣ������ظ�
//	umm.insert({ "mom", "����" });
//	umm.insert({ "mom", "ĸ��" });
//	umm.insert({ "dad", "����" });
//	umm.insert({ "bro", "�ֵ�" });
//
//	// ���ҵ�һ��"mom"��key���������Ӧ��value
//	cout << "one of the values for 'mom' is: ";
//	cout << umm.find("mom")->second;
//}


void test_unordered()
{
	// ��ʼ������
	unordered_multimap<string, string> umm = {
		{"orange","FL"},
		{"strawberry","LA"},
		{"strawberry","OK"},
		{"pumpkin","NH"} 
	};

	// ͳ���������������������г��ֵĴ���
	for (auto& x : { "orange","lemon","strawberry" }) 
	{
		cout << x << ": " << umm.count(x) << " ��" << endl;
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