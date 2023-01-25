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

//// ����
//class Car {
//public:
//	virtual void Drive() {}
//};
//
//// ������
//class Benz :public Car {
//public:
//	// ��������˸����麯������д������ͨ��
//	virtual void Drive() override 
//	{ 
//		cout << "Benz-����" << endl; 
//	}
//};
//
//// ������
//class BMW :public Car {
//public:
//	// ����û������˸����麯������д�����뱨��
//	void Drive(int i) override
//	{
//		cout << "Benz-�ÿ�" << endl;
//	}
//};



// ������  -- ����ʵһ��û�о����Ӧʵ��
// ����ʵ����������
// ��ӹ��ܣ�Ҫ��������Ҫ��д������ʵ����������


////�����ࣨ�ӿ��ࣩ
//class Car
//{
//public:
//	//���麯��
//	virtual void Drive() = 0;
//};
//
////������
//class Benz : public Car
//{
//public:
//	//��д���麯��
//	virtual void Drive()
//	{
//		cout << "Benz-����" << endl;
//	}
//};
//
////������
//class BMV : public Car
//{
//public:
//	//��д���麯��
//	virtual void Drive()
//	{
//		cout << "BMV-�ٿ�" << endl;
//	}
//};
//
//int main()
//{
//	//��������д�˴��麯��������ʵ����������
//	Benz b1;
//	BMV b2;
//
//	//��ͬ�����û���ָ�����Drive��������ɲ�ͬ����Ϊ
//	Car* p1 = &b1;
//	Car* p2 = &b2;
//
//	p1->Drive();  //Benz-����
//	p2->Drive();  //BMV-�ٿ�
//	return 0;
//}


// ���ﳣ��һ�������⣺sizeof(Base)�Ƕ��٣�
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


////����
//class Base
//{
//public:
//	//�麯��
//	virtual void Func1()
//	{
//		cout << "Base::Func1()" << endl;
//	}
//	//�麯��
//	virtual void Func2()
//	{
//		cout << "Base::Func2()" << endl;
//	}
//	//��ͨ��Ա����
//	void Func3()
//	{
//		cout << "Base::Func3()" << endl;
//	}
//private:
//	int _b = 1;
//};
//
////����
//class Derive : public Base
//{
//public:
//	//��д�麯��Func1
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
//	printf("ջ�ϵ�ַ:%p\n", &i);       
//	printf("���ݶε�ַ:%p\n", &j);     
//
//	int* k = new int;
//	printf("���ϵ�ַ:%p\n", k);   
//
//	const char* cp = "hello world";
//	printf("����ε�ַ:%p\n", cp);    
//
//	return 0;
//}

//// ����
//class Person {
//public:
//	virtual void BuyTicket() 
//	{ 
//		cout << "��Ʊ-ȫ��" << endl; 
//	}
//	int _p = 1;
//};
//
//// ����
//class Student : public Person {
//public:
//	virtual void BuyTicket() 
//	{ 
//		cout << "��Ʊ-���" << endl; 
//	}
//	int _s = 2;
//};

//int main()
//{
//	Person Mike;
//	Student Johnson;
//
//	Johnson._p = 3; //�Ա�۲��Ƿ������Ƭ
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
//	//p1->BuyTicket(); //��Ʊ-ȫ��
//	//p2->BuyTicket(); //��Ʊ-���
//
//	return 0;
//}



//int main()
//{
//	Person Mike;
//	Student Johnson;
//
//	Johnson._p = 3; //�Ա�۲��Ƿ������Ƭ
//
//	Person p1 = Mike;
//	Person p2 = Johnson;
//
//	p1.BuyTicket();
//	p2.BuyTicket();
//
//	return 0;
//}


////����
//class Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "��Ʊ-ȫ��" << endl;
//	}
//};
//
////����
//class Student : public Person
//{
//public:
//	virtual void BuyTicket()
//	{
//		cout << "��Ʊ-���" << endl;
//	}
//};
//
//int main()
//{
//	Student Johnson;
//	Person& p = Johnson; //���ɶ�̬
//
//	p.BuyTicket();
//	return 0;
//}

//// ����
//class Base {
//public:
//	virtual void func1() { cout << "Base::func1" << endl; }
//	virtual void func2() { cout << "Base::func2" << endl; }
//private:
//	int a;
//};
//
//// ����
//class Derive :public Base {
//public:
//	virtual void func1() { cout << "Derive::func1" << endl; }
//	virtual void func3() { cout << "Derive::func3" << endl; }
//	virtual void func4() { cout << "Derive::func4" << endl; }
//private:
//	int b;
//};


//// ȡ�ڴ�ֵ����ӡ�����ã�ȷ���Ƿ���func4
//typedef void(*V_FUNC)();
//
//// ��ӡ���
//void PrintVFTable(V_FUNC* a)
//{
//	printf("����ַ:%p\n", a);
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
//	PrintVFTable((V_FUNC*)(*((int*)&b))); //��ӡ�������b������ַ��������
//
//	Derive d;
//	PrintVFTable((V_FUNC*)(*((int*)&d))); //��ӡ���������d������ַ��������
//	return 0;
//}

// ����1
class Base1 {
public:
	virtual void func1() { cout << "Base1::func1" << endl; }
	virtual void func2() { cout << "Base1::func2" << endl; }
private:
	int _b1;
};

// ����2
class Base2 {
public:
	virtual void func1() { cout << "Base2::func1" << endl; }
	virtual void func2() { cout << "Base2::func2" << endl; }
private:
	int _b2;
};

// ��̳�����
class Derive : public Base1, public Base2 {
public:
	virtual void func1() { cout << "Derive::func1" << endl; }
	virtual void func3() { cout << "Derive::func3" << endl; }
private:
	int _d1;
};

// ȡ�ڴ�ֵ����ӡ�����ã�ȷ���Ƿ���func4
typedef void(*VFPTR) ();

// ��ӡ���
void PrintVTable(VFPTR vTable[])
{
	// ����ȡ����е��麯��ָ���ӡ�����á����þͿ��Կ���������ĸ�����
	cout << " ����ַ:" << vTable << endl;
	for (int i = 0; vTable[i] != nullptr; ++i)
	{
		printf(" ��%d���麯����ַ:0X%x --> ", i, vTable[i]);
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
