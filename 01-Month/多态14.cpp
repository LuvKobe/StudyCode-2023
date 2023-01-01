#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
using namespace std;

//// ����
//class Person {
//public:
//	Person(const char* name)
//		:_name(name)
//	{}
//
//	// �麯��
//	virtual void BuyTicket() 
//	{ 
//		cout << _name << "Person����Ʊ-ȫ�� 100��" << endl; 
//	}
//
//protected:
//	string _name;
//};
//
//// ������ - ѧ��
//class Student : public Person {
//public:
//	Student(const char* name)
//		:Person(name)
//	{}
//
//	// �麯�� + ������/����/����ֵ ==> ��д/����
//	virtual void BuyTicket() 
//	{ 
//		cout << _name << " Student����Ʊ-��� 50 ��" << endl; 
//	}
//};
//
//// ������ - ����
//class Soldier : public Person {
//public:
//	Soldier(const char* name)
//		:Person(name)
//	{}
//
//	// �麯�� + ������/����/����ֵ ==> ��д/����
//	virtual void BuyTicket() 
//	{ 
//		cout << _name << " Soldier��������Ԥ��Ʊ-88�� 88 ��" << endl; 
//	}
//};
//
//// ��̬����Ҫ��
//// 1�������麯����д�ĸ����麯�� ����д����ͬ��������/����/����ֵ��+�麯����
//// 2������ָ���������ȥ�����麯����
//
//// ����ָ��ȥ�����麯��
////void Pay(Person* ptr)
////{
////	ptr->BuyTicket();
////}
//
//// ��������ȥ�����麯��
//void Pay(Person& ptr)
//{
//	ptr.BuyTicket();
//}
//
//// ���ܹ��ɶ�̬
////void Pay(Person ptr)
////{
////	ptr.BuyTicket();
////}
//
//int main()
//{
//	int option = 0;
//	cout << "=======================================" << endl;
//	do 
//	{
//		cout << "��ѡ����ݣ�";
//		cout << "1����ͨ�� 2��ѧ�� 3������" << endl;
//		cin >> option;
//		cout << "���������֣�";
//		string name;
//		cin >> name;
//		switch (option)
//		{
//		case 1:
//		{
//				  Person p(name.c_str());
//				  Pay(p);
//				  break;
//		}
//		case 2:
//		{
//				  Student s(name.c_str());
//				  Pay(s);
//				  break;
//		}
//		case 3:
//		{
//				  Soldier s(name.c_str());
//				  Pay(s);
//				  break;
//		}
//		default:
//			cout << "�������,����������" << endl;
//			break;
//		}
//		cout << "=======================================" << endl;
//	} while (option != -1);
//
//	return 0;
//}




//class Person {
//public:
//	virtual A* f() { return new A; }
//};
//
//class Student : public Person {
//public:
//	virtual B* f() { return new B; }
//};

//
//// ����
//class A{};
//
//// ������
//class B : public A {};
//
//// �麯����д�Է���ֵҪ����һ�����⣺Э�䣬���ӹ�ϵָ�������
//class Person {
//public:
//	virtual A* f() { 
//		cout << "virtual A* Person::f()" << endl;
//		return new A; 
//	}
//};
//
//class Student : public Person {
//public:
//	// �����麯��û��дvirtual��f����ʱ�麯������Ϊ�ȼ̳��˸��ຯ���ӿ�����
//	// ��д�����麯��ʵ��
//	// ps�������Լ�д��ʱ�������麯��Ҳд��virtual
//	// B& f() { 
//	B* f() {
//		cout << "virtual B* Student::f()" << endl;
//		return new B; 
//	}
//};
//
//int main()
//{
//	Person p;
//	Student s;
//
//	Person* ptr1 = &p;
//	ptr1->f();
//
//	Person* ptr2 = &s;
//	ptr2->f();
//
//	return 0;
//}
//
//// ����
//class Person {
//public:
//	virtual ~Person() 
//	{ 
//		cout << "~Person()" << endl; 
//	}
//};
//
//// ������
//class Student : public Person {
//public:
//	virtual ~Student()
//	{ 
//		cout << "~Student()" << endl; 
//	}
//};
//
//int main()
//{
//	Person* p1 = new Person;
//	Person* p2 = new Student;
//
//	delete p1;
//	delete p2;
//
//	return 0;
//}

//// ����
//class Car
//{
//public:
//	// ��final���Σ����麯�������ٱ���д
//	virtual void Drive() final {}
//};
//
//// ����
//class Benz :public Car
//{
//public:
//	virtual void Drive() 
//	{ 
//		cout << "Benz-����" << endl; 
//	}
//};

// ����
class Car {
public:
	virtual void Drive() {}
};

// ������
class Benz :public Car {
public:
	// ��������˸����麯������д������ͨ��
	virtual void Drive() override 
	{ 
		cout << "Benz-����" << endl; 
	}
};

// ������
class BMW :public Car {
public:
	// ����û������˸����麯������д�����뱨��
	void Drive(int i) override
	{
		cout << "Benz-�ÿ�" << endl;
	}
};


int main()
{
	return 0;
}
