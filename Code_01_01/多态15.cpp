#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
using namespace std;

//// 基类
//class Person {
//public:
//	Person(const char* name)
//		:_name(name)
//	{}
//
//	// 虚函数
//	virtual void BuyTicket() 
//	{ 
//		cout << _name << "Person：买票-全价 100￥" << endl; 
//	}
//
//protected:
//	string _name;
//};
//
//// 派生类 - 学生
//class Student : public Person {
//public:
//	Student(const char* name)
//		:Person(name)
//	{}
//
//	// 虚函数 + 函数名/参数/返回值 ==> 重写/覆盖
//	virtual void BuyTicket() 
//	{ 
//		cout << _name << " Student：买票-半价 50 ￥" << endl; 
//	}
//};
//
//// 派生类 - 军人
//class Soldier : public Person {
//public:
//	Soldier(const char* name)
//		:Person(name)
//	{}
//
//	// 虚函数 + 函数名/参数/返回值 ==> 重写/覆盖
//	virtual void BuyTicket() 
//	{ 
//		cout << _name << " Soldier：优先买预留票-88折 88 ￥" << endl; 
//	}
//};
//
//// 多态两个要求：
//// 1、子类虚函数重写的父类虚函数 （重写：三同（函数名/参数/返回值）+虚函数）
//// 2、父类指针或者引用去调用虚函数。
//
//// 父类指针去调用虚函数
////void Pay(Person* ptr)
////{
////	ptr->BuyTicket();
////}
//
//// 父类引用去调用虚函数
//void Pay(Person& ptr)
//{
//	ptr.BuyTicket();
//}
//
//// 不能构成多态
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
//		cout << "请选择身份：";
//		cout << "1、普通人 2、学生 3、军人" << endl;
//		cin >> option;
//		cout << "请输入名字：";
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
//			cout << "输入错误,请重新输入" << endl;
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
//// 基类
//class A{};
//
//// 派生类
//class B : public A {};
//
//// 虚函数重写对返回值要求有一个例外：协变，父子关系指针和引用
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
//	// 子类虚函数没有写virtual，f依旧时虚函数，因为先继承了父类函数接口声明
//	// 重写父类虚函数实现
//	// ps：我们自己写的时候子类虚函数也写上virtual
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
//// 基类
//class Person {
//public:
//	virtual ~Person() 
//	{ 
//		cout << "~Person()" << endl; 
//	}
//};
//
//// 派生类
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

//// 基类
//class Car
//{
//public:
//	// 被final修饰，该虚函数不能再被重写
//	virtual void Drive() final {}
//};
//
//// 子类
//class Benz :public Car
//{
//public:
//	virtual void Drive() 
//	{ 
//		cout << "Benz-舒适" << endl; 
//	}
//};

// 基类
class Car {
public:
	virtual void Drive() {}
};

// 派生类
class Benz :public Car {
public:
	// 子类完成了父类虚函数的重写，编译通过
	virtual void Drive() override 
	{ 
		cout << "Benz-舒适" << endl; 
	}
};

// 派生类
class BMW :public Car {
public:
	// 子类没有完成了父类虚函数的重写，编译报错
	void Drive(int i) override
	{
		cout << "Benz-好开" << endl;
	}
};


int main()
{
	return 0;
}
