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

//// 基类
//class Car {
//public:
//	virtual void Drive() {}
//};
//
//// 派生类
//class Benz :public Car {
//public:
//	// 子类完成了父类虚函数的重写，编译通过
//	virtual void Drive() override 
//	{ 
//		cout << "Benz-舒适" << endl; 
//	}
//};
//
//// 派生类
//class BMW :public Car {
//public:
//	// 子类没有完成了父类虚函数的重写，编译报错
//	void Drive(int i) override
//	{
//		cout << "Benz-好开" << endl;
//	}
//};



// 抽象类  -- 在现实一般没有具体对应实体
// 不能实例化出对象
// 间接功能：要求子类需要重写，才能实例化出对象


////抽象类（接口类）
//class Car
//{
//public:
//	//纯虚函数
//	virtual void Drive() = 0;
//};
//
////派生类
//class Benz : public Car
//{
//public:
//	//重写纯虚函数
//	virtual void Drive()
//	{
//		cout << "Benz-舒适" << endl;
//	}
//};
//
////派生类
//class BMV : public Car
//{
//public:
//	//重写纯虚函数
//	virtual void Drive()
//	{
//		cout << "BMV-操控" << endl;
//	}
//};
//
//int main()
//{
//	//派生类重写了纯虚函数，可以实例化出对象
//	Benz b1;
//	BMV b2;
//
//	//不同对象用基类指针调用Drive函数，完成不同的行为
//	Car* p1 = &b1;
//	Car* p2 = &b2;
//
//	p1->Drive();  //Benz-舒适
//	p2->Drive();  //BMV-操控
//	return 0;
//}


// 这里常考一道笔试题：sizeof(Base)是多少？
//class Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Func1()" << endl;
//	}
//private:
//	int _b = 1;
//};
//
//
//int main()
//{
//	Base b;
//
//	return 0;
//}


////父类
//class Base
//{
//public:
//	//虚函数
//	virtual void Func1()
//	{
//		cout << "Base::Func1()" << endl;
//	}
//	//虚函数
//	virtual void Func2()
//	{
//		cout << "Base::Func2()" << endl;
//	}
//	//普通成员函数
//	void Func3()
//	{
//		cout << "Base::Func3()" << endl;
//	}
//private:
//	int _b = 1;
//};
//
////子类
//class Derive : public Base
//{
//public:
//	//重写虚函数Func1
//	virtual void Func1()
//	{
//		cout << "Derive::Func1()" << endl;
//	}
//private:
//	int _d = 2;
//};
//
//int j = 0;
//
//int main()
//{
//	Base b;
//	Base* p = &b;
//	printf("vfptr:%p\n", *((int*)p)); 
//
//	int i = 0;
//	printf("栈上地址:%p\n", &i);       
//	printf("数据段地址:%p\n", &j);     
//
//	int* k = new int;
//	printf("堆上地址:%p\n", k);   
//
//	const char* cp = "hello world";
//	printf("代码段地址:%p\n", cp);    
//
//	return 0;
//}

//// 父类
//class Person {
//public:
//	virtual void BuyTicket() 
//	{ 
//		cout << "买票-全价" << endl; 
//	}
//	int _p = 1;
//};
//
//// 子类
//class Student : public Person {
//public:
//	virtual void BuyTicket() 
//	{ 
//		cout << "买票-半价" << endl; 
//	}
//	int _s = 2;
//};

//int main()
//{
//	Person Mike;
//	Student Johnson;
//
//	Johnson._p = 3; //以便观察是否完成切片
//
//	/*Person* p1 = &Mike;
//	Person* p2 = &Johnson;*/
//
//	Person p1 = Mike;
//	Person p2 = Johnson;
//
//	p1.BuyTicket();
//	p2.BuyTicket();
//
//
//	//p1->BuyTicket(); //买票-全价
//	//p2->BuyTicket(); //买票-半价
//
//	return 0;
//}



//int main()
//{
//	Person Mike;
//	Student Johnson;
//
//	Johnson._p = 3; //以便观察是否完成切片
//
//	Person p1 = Mike;
//	Person p2 = Johnson;
//
//	p1.BuyTicket();
//	p2.BuyTicket();
//
//	return 0;
//}


////父类
//class Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "买票-全价" << endl;
//	}
//};
//
////子类
//class Student : public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "买票-半价" << endl;
//	}
//};
//
//int main()
//{
//	Student Johnson;
//	Person& p = Johnson; //构成多态
//
//	p.BuyTicket();
//	return 0;
//}

//// 父类
//class Base {
//public:
//	virtual void func1() { cout << "Base::func1" << endl; }
//	virtual void func2() { cout << "Base::func2" << endl; }
//private:
//	int a;
//};
//
//// 子类
//class Derive :public Base {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//	virtual void func4() { cout << "Derive::func4" << endl; }
//private:
//	int b;
//};


//// 取内存值，打印并调用，确认是否是func4
//typedef void(*V_FUNC)();
//
//// 打印虚表
//void PrintVFTable(V_FUNC* a)
//{
//	printf("虚表地址:%p\n", a);
//	for (size_t i = 0; a[i] != nullptr; ++i)
//	{
//		printf("ptr[%d]:%p-->", i, a[i]);
//		V_FUNC f = a[i];
//		f();
//	}
//	cout << endl;
//}
//
//int main()
//{
//	Base b;
//	PrintVFTable((V_FUNC*)(*((int*)&b))); //打印基类对象b的虚表地址及其内容
//
//	Derive d;
//	PrintVFTable((V_FUNC*)(*((int*)&d))); //打印派生类对象d的虚表地址及其内容
//	return 0;
//}

// 父类1
class Base1 {
public:
	virtual void func1() { cout << "Base1::func1" << endl; }
	virtual void func2() { cout << "Base1::func2" << endl; }
private:
	int _b1;
};

// 父类2
class Base2 {
public:
	virtual void func1() { cout << "Base2::func1" << endl; }
	virtual void func2() { cout << "Base2::func2" << endl; }
private:
	int _b2;
};

// 多继承子类
class Derive : public Base1, public Base2 {
public:
	virtual void func1() { cout << "Derive::func1" << endl; }
	virtual void func3() { cout << "Derive::func3" << endl; }
private:
	int _d1;
};

// 取内存值，打印并调用，确认是否是func4
typedef void(*VFPTR) ();

// 打印虚表
void PrintVTable(VFPTR vTable[])
{
	// 依次取虚表中的虚函数指针打印并调用。调用就可以看出存的是哪个函数
	cout << " 虚表地址:" << vTable << endl;
	for (int i = 0; vTable[i] != nullptr; ++i)
	{
		printf(" 第%d个虚函数地址:0X%x --> ", i, vTable[i]);
		VFPTR f = vTable[i];
		f();
	}
	cout << endl;
}




int main()
{
	Base1 b1;
	Base2 b2;
	VFPTR* vTableb1 = (VFPTR*)(*(int*)&b1);
	PrintVTable(vTableb1);
	VFPTR* vTableb2 = (VFPTR*)(*(int*)&b2);
	PrintVTable(vTableb2);


	Derive d;
	VFPTR* vTableb3 = (VFPTR*)(*(int*)&d);
	PrintVTable(vTableb3);

	VFPTR* vTableb4 = (VFPTR*)(*(int*)((char*)&d + sizeof(Base1)));
	PrintVTable(vTableb4);

	return 0;
}

#include <iostream>
using namespace std;

class A {
public:
	A(char* s) { cout << s << endl; }
	~A() {}
};
class B :virtual public A
{
public:
	B(char* s1, char* s2) :A(s1) { cout << s2 << endl; }
};
class C :virtual public A
{
public:
	C(char* s1, char* s2) :A(s1) { cout << s2 << endl; }
};
class D :public B, public C
{
public:
	D(char* s1, char* s2, char* s3, char* s4) :B(s1, s2), C(s1, s3), A(s1)
	{
		cout << s4 << endl;
	}
};
int main() {
	D* p = new D("class A", "class B", "class C", "class D");
	delete p;
	return 0;
}
