#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

//void testmap()
//{
//	// ����һ��keyΪstring���ͣ�valueΪint���͵Ŀ�����
//	map<string, int> m1;
//
//	// ��������keyΪstring���ͣ�valueΪint���͵�m1�����ĸ���Ʒ
//	map<string, int> m2(m1); 
//
//	// ʹ�õ�������������m2����ĳ������ĸ���Ʒ
//	map<string, int> m3(m2.begin(), m2.end());
//}


//void testmap()
//{
//	map<string, string> dict;
//
//	// ����pair�Ĺ��캯��������һ�������������
//	dict.insert(pair<string, string>("sort", "����"));
//	dict.insert(pair<string, string>("root", "��"));
//	dict.insert(pair<string, string>("left", "���"));
//
//	// ����
//	for (auto e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//}


//void testmap()
//{
//	map<string, string> dict;
//
//	// ����pair�Ĺ��캯��������һ�������������
//	dict.insert(make_pair("sort", "����"));
//	dict.insert(make_pair("root", "��"));
//	dict.insert(make_pair("left", "���"));
//	dict.insert(make_pair("up", "����"));
//
//	// ����
//	for (auto e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//}


//void testmap()
//{
//	string arr[] = { "ƻ��", "����", "ƻ��", "����", "ƻ��", "ƻ��", "����", "ƻ��", "�㽶", "ƻ��", "�㽶" };
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
//	// ����
//	for (const auto& kv : countFruit)
//	{
//		cout << kv.first << ":" << kv.second << endl;
//	}
//}


//void testmap()
//{
//	string arr[] = { "ƻ��", "����", "ƻ��", "����", "ƻ��", "ƻ��", "����", "ƻ��", "�㽶", "ƻ��", "�㽶" };
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
//	// ����
//	for (const auto& kv : countFruit)
//	{
//		cout << kv.first << ":" << kv.second << endl;
//	}
//}



//void testmap()
//{
//	string arr[] = { "ƻ��", "����", "ƻ��", "����", "ƻ��", "ƻ��", "����", "ƻ��", "�㽶", "ƻ��", "�㽶" };
//
//	map<string, int> countFruit;
//	for (auto& str : arr)
//	{
//		countFruit[str]++; 
//	}
//
//	// ����
//	for (const auto& kv : countFruit)
//	{
//		cout << kv.first << ":" << kv.second << endl;
//	}
//}



//void testmap()
//{
//	map<string, string> dict;
//	
//	// ��make_pair�����������ֵ��
//	dict.insert(make_pair("sort", "����"));
//	dict.insert(make_pair("root", "��"));
//	dict.insert(make_pair("left", "���"));
//	
//	dict["up"] = "����"; // up������,��ô�Ͳ���upԪ�ز��޸�(����+�޸�)
//	dict["left"] = "ʣ��"; // left����,��ôֻ�޸�(����+�޸�)
//	dict["erase"]; // erase������,��ô����
//	
//	// ����
//	for (auto e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//}


//void testmap()
//{
//	map<string, string> dict;
//	
//	// ��make_pair�����������ֵ��
//	dict["sort"] = "����";
//	dict["up"] = "����";;
//	dict["left"] = "���";
//	dict["root"] = "��";
//	
//	auto pos = dict.find("root");
//	if (pos != dict.end())
//	{
//		cout << "�ҵ���" << endl;
//		cout << pos->first << ":" << pos->second << endl;
//	}
//}


//void testmap()
//{
//	map<string, string> dict;
//
//	// ��make_pair�����������ֵ��
//	dict["sort"] = "����";
//	dict["up"] = "����";;
//	dict["left"] = "���";
//	dict["root"] = "��";
//
//	auto pos = dict.find("root");
//	if (pos != dict.end())
//	{
//		dict.erase(pos, dict.end()); // ɾ����posλ�ÿ�ʼ�������е�Ԫ��
//		cout << "ɾ���ɹ�" << endl;
//	}
//
//	// ����
//	for (auto e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//}



//void testmap()
//{
//	map<string, string> dict1;
//	dict1["sort"] = "����";
//	dict1["up"] = "����";;
//	dict1["left"] = "���";
//	dict1["root"] = "��";
//
//	map<string, string> dict2;
//	dict2["size"] = "��С";
//	dict2["erase"] = "ɾ��";
//	dict2["clear"] = "���";
//	dict2["insert"] = "����";;
//
//	dict1.swap(dict2); // �������������е�Ԫ��
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
//	dict1["sort"] = "����";
//	dict1["up"] = "����";;
//	dict1["left"] = "���";
//	dict1["root"] = "��";
//
//	map<string, string> dict2;
//
//	cout << dict1.empty() << endl; // ��Ϊ��,����false
//
//	cout << dict2.empty() << endl; // Ϊ��,����true
//}


//void testmultimap()
//{
//	multimap<string, string> dict;
//	dict.insert(make_pair("sort", "����"));
//	dict.insert(make_pair("up", "����"));
//	dict.insert(make_pair("left", "���"));
//	dict.insert(make_pair("root", "��"));
//	dict.insert(make_pair("sort", "����"));
//	dict.insert(make_pair("root", "ԭ��"));
//	dict.insert(make_pair("hello", "����"));
//	dict.insert(make_pair("root", "·��"));
//
//	// ����
//	for (auto e : dict)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//
//	auto pos = dict.find("root"); // ���root�Ļ�,���������һ��root
//
//	// ��ӡposλ�ú��������Ԫ��
//	while (pos != dict.end())
//	{
//		cout << pos->first << ":" << pos->second << endl;
//		++pos;
//	}
//}


//void testmap()
//{
//	multimap<string, string> dict;
//	dict.insert(make_pair("sort", "����"));
//	dict.insert(make_pair("up", "����"));
//	dict.insert(make_pair("left", "���"));
//	dict.insert(make_pair("root", "��"));
//	dict.insert(make_pair("sort", "����"));
//	dict.insert(make_pair("root", "ԭ��"));
//	dict.insert(make_pair("hello", "����"));
//	dict.insert(make_pair("root", "·��"));
//
//	// ͳ��root��Ԫ�ظ���
//	cout << dict.count("root") << endl;
//
//	// ����
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

	// ���յ��ʳ��ִ���(int)���н�������
	multimap<int, string, greater<int>> sortMap;
	for (auto& kv : countMap)
	{
		sortMap.insert(make_pair(kv.second, kv.first));
	}

	// ����
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