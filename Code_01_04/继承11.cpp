#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <string>
using namespace std;

//class Person
//{
//public:
//	void Print()
//	{
//		cout << "name:" << _name << endl;
//		cout << "name:" << _tell << endl;
//		cout << "name:" << _address << endl;
//		cout << "age:" << _age << endl;
//	}
//protected:
//	string _name = "Edison"; // ����
//	string _tell = "18877889966"; // �绰
//	string _address = "��������"; // סַ
//	int _age = 18; // ����
//};
//
//class Student : public Person
//{
//protected:
//	int _stuId; // ѧ��
//};
//
//class Teacher : public Person
//{
//protected:
//	int _workId; // ����
//};
//
//int main()
//{
//	Student s;
//	Teacher t;
//	s.Print();
//	t.Print();
//
//	return 0;
//}


//class Student
//{
//	string _name; // ����
//	string _tell; // �绰
//	string _address; // סַ
//	int _age; // ����
//	int _stuId; // ѧ��ID
//};
//
//class Teacher
//{
//	string _name; // ����
//	string _tell; // �绰
//	string _address; // סַ
//	int _age; // ����
//	int _workId; // ��ʦID
//};

////����
//class Person
//{
//public:
//	string _name = "Edison"; // ����
//	string _sex = "��"; // �Ա�
//	int _age = 20; // ����
//};
//
////������
//class Student : public Person
//{
//public:
//	int _id;
//};
//
//int main()
//{
//	Student s;
//	
//	Person* pp = &s;
//	Student* ps1 = (Student*)pp;
//	ps1->_id = 10;
//
//	return 0;
//}




//int main()
//{
//	Student s;
//
//	s._name = "����";
//	s._sex = "��";
//	s._age = 20;
//	s._id = 8888;
//
//	Person& rp = s;
//
//	return 0;
//}

//int main()
//{
//	Student s;
//
//	s._name = "����";
//	s._sex = "��";
//	s._age = 20;
//	s._id = 8888;
//
//	Person* p = &s;
//
//	return 0;
//}


//int main()
//{
//	Person p;
//	Student s;
//
//	s._name = "����";
//	s._sex = "��";
//	s._age = 20;
//	s._id = 8888;
//	
//	p = s;
//
//	return 0;
//}

//// ����
//class Person
//{
//protected:
//	string _name = "Edison"; // ����
//	int _num = 555; // ���֤��
//};
//
//// ������
//class Student : public Person
//{
//public:
//	void Print()
//	{
//		cout << "����:" << _name << endl;
//		cout << "���֤��:" << Person::_num << endl;
//	}
//protected:
//	int _num = 888; // ѧ��
//};
//
//int main()
//{
//	Student s1;
//	s1.Print();
//
//	return 0;
//}

//// ����
//class A
//{
//public:
//	void fun()
//	{
//		cout << "A::func()" << endl;
//	}
//};
//
//
//
//
//// ������
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		cout << "B::func()" << endl;
//		cout << "func(int i)->" << i << endl;
//	}
//};
//
//int main()
//{
//	B b;
//	b.A::fun();
//
//	return 0;
//}

// ����
//class Person
//{
//public:
//    // ���캯��
//    Person(const char* name = "peter")
//        : _name(name)
//    {
//        cout << "Person()" << endl;
//    }
//
//    // ��������
//    Person(const Person& p)
//        : _name(p._name)
//    {
//        cout << "Person(const Person& p)" << endl;
//    }
//
//    // ��ֵ����
//    Person& operator=(const Person& p)
//    {
//        cout << "Person operator=(const Person& p)" << endl;
//        if (this != &p)
//            _name = p._name;
//
//        return *this;
//    }
//
//    // ��������
//    ~Person()
//    {
//        cout << "~Person()" << endl;
//    }
//protected:
//    string _name; // ����
//};
//
//// ������
//class Student : public Person
//{
//public:
//    // ���캯��
//    Student(const char* name, int num)
//        : Person(name)
//        , _num(num)
//    {
//        cout << "Student()" << endl;
//    }
//
//    // ��������
//    Student(const Student& s)
//        : Person(s)
//        , _num(s._num)
//    {
//        cout << "Student(const Student& s)" << endl;
//    }
//
//    // ��ֵ����
//    Student& operator = (const Student& s)
//    {
//        cout << "Student& operator= (const Student& s)" << endl;
//        if (this != &s)
//        {
//            Person::operator =(s);
//            _num = s._num;
//        }
//        return *this;
//    }
//
//    // ��������
//    ~Student()
//    {
//        cout << "~Student()" << endl;
//    }
//protected:
//    int _num; //ѧ��
//};
//
//int main()
//{
//    Student s1("jack", 18);
//    Student s2(s1);
//    Student s3("rose", 17);
//
//    return 0;
//}


//class Student;
//
//class Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	string _name; // ����
//};
//
//class Student : public Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	int _stuNum; // ѧ��
//};
//
//void Display(const Person& p, const Student& s)
//{
//	cout << p._name << endl; // ���Է���
//	cout << s._stuNum << endl; // �޷�����
//}
//
//int main()
//{
//	Person p;
//	Student s;
//	Display(p, s);
//
//	return 0;
//}

//// ����
//class Person
//{
//public:
//	Person() { ++_count; }
//protected:
//	string _name; // ����
//public:
//	static int _count; // ͳ���˵ĸ�����
//};
//
//// ��̬��Ա�������涨��
//int Person::_count = 0; 
//
//// ������
//class Student : public Person
//{
//protected:
//	int _stuNum; // ѧ��
//};
//
//// ������
//class Graduate : public Student
//{
//protected:
//	string _seminarCourse; // �о���Ŀ
//};
//
//int main()
//{
//	Student s1;
//	Student s2;
//	Student s3;
//	Graduate s4;
//	Person s;
//
//	cout << " ���� :" << Person::_count << endl;
//	cout << " ���� :" << Student::_count << endl;
//	cout << " ���� :" << s4._count << endl;
//
//	cout << endl;
//
//	cout << " ���� :" << &Person::_count << endl;
//	cout << " ���� :" << &Student::_count << endl;
//	cout << " ���� :" << &s4._count << endl;
//
//	return 0;
//}

//class Person
//{
//public:
//	string _name; // ����
//};
//
//class Student : virtual public Person
//{
//protected:
//	int _num; //ѧ��
//};
//
//class Teacher : virtual public Person
//{
//protected:
//	int _id; // ְ�����
//};
//
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // ���޿γ�
//};
//
//int main()
//{
//	Assistant a;
//	a._name = "Edison";
//
//	// ��ʱ������������������
//	cout << &a.Student::_name << endl;
//	cout << &a.Teacher::_name << endl;
//
//	return 0;
//}


//class A
//{
//public:
//	int _a;
//};
//
//class B : virtual public A
//{
//public:
//	int _b;
//};
//
//class C : virtual public A
//{
//public:
//	int _c;
//};
//
//class D : public B, public C
//{
//public:
//	int _d;
//};
//
//int main()
//{
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//
//	C c = d;
//
//	return 0;
//}

// ����
class Car
{
protected:
	string _colour = "��ɫ"; // ��ɫ
	string _num = "��A66688"; // ���ƺ�
};

// ����
class Benz : public Car
{
public:
	void Drive()
	{
		cout << "�ÿ�-�ٿ�" << endl;
	}
};

// ��̥
class Tire {
protected:
	string _brand = "Michelin"; // Ʒ��
	size_t _size = 17; // �ߴ�

};

// ����
class Car {
protected:
	string _colour = "��ɫ"; // ��ɫ
	string _num = "��A66688"; // ���ƺ�
	Tire _t; // ��̥
};



