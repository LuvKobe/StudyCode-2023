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
//	string _name = "Edison"; // 姓名
//	string _tell = "18877889966"; // 电话
//	string _address = "北京北京"; // 住址
//	int _age = 18; // 年龄
//};
//
//class Student : public Person
//{
//protected:
//	int _stuId; // 学号
//};
//
//class Teacher : public Person
//{
//protected:
//	int _workId; // 工号
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
//	string _name; // 姓名
//	string _tell; // 电话
//	string _address; // 住址
//	int _age; // 年龄
//	int _stuId; // 学生ID
//};
//
//class Teacher
//{
//	string _name; // 姓名
//	string _tell; // 电话
//	string _address; // 住址
//	int _age; // 年龄
//	int _workId; // 教师ID
//};

////基类
//class Person
//{
//public:
//	string _name = "Edison"; // 姓名
//	string _sex = "男"; // 性别
//	int _age = 20; // 年龄
//};
//
////派生类
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
//	s._name = "张三";
//	s._sex = "男";
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
//	s._name = "张三";
//	s._sex = "男";
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
//	s._name = "张三";
//	s._sex = "男";
//	s._age = 20;
//	s._id = 8888;
//	
//	p = s;
//
//	return 0;
//}

//// 基类
//class Person
//{
//protected:
//	string _name = "Edison"; // 姓名
//	int _num = 555; // 身份证号
//};
//
//// 派生类
//class Student : public Person
//{
//public:
//	void Print()
//	{
//		cout << "姓名:" << _name << endl;
//		cout << "身份证号:" << Person::_num << endl;
//	}
//protected:
//	int _num = 888; // 学号
//};
//
//int main()
//{
//	Student s1;
//	s1.Print();
//
//	return 0;
//}

//// 基类
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
//// 派生类
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

// 基类
//class Person
//{
//public:
//    // 构造函数
//    Person(const char* name = "peter")
//        : _name(name)
//    {
//        cout << "Person()" << endl;
//    }
//
//    // 拷贝构造
//    Person(const Person& p)
//        : _name(p._name)
//    {
//        cout << "Person(const Person& p)" << endl;
//    }
//
//    // 赋值重载
//    Person& operator=(const Person& p)
//    {
//        cout << "Person operator=(const Person& p)" << endl;
//        if (this != &p)
//            _name = p._name;
//
//        return *this;
//    }
//
//    // 析构函数
//    ~Person()
//    {
//        cout << "~Person()" << endl;
//    }
//protected:
//    string _name; // 姓名
//};
//
//// 派生类
//class Student : public Person
//{
//public:
//    // 构造函数
//    Student(const char* name, int num)
//        : Person(name)
//        , _num(num)
//    {
//        cout << "Student()" << endl;
//    }
//
//    // 拷贝构造
//    Student(const Student& s)
//        : Person(s)
//        , _num(s._num)
//    {
//        cout << "Student(const Student& s)" << endl;
//    }
//
//    // 赋值重载
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
//    // 析构函数
//    ~Student()
//    {
//        cout << "~Student()" << endl;
//    }
//protected:
//    int _num; //学号
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
//	string _name; // 姓名
//};
//
//class Student : public Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	int _stuNum; // 学号
//};
//
//void Display(const Person& p, const Student& s)
//{
//	cout << p._name << endl; // 可以访问
//	cout << s._stuNum << endl; // 无法访问
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

//// 基类
//class Person
//{
//public:
//	Person() { ++_count; }
//protected:
//	string _name; // 姓名
//public:
//	static int _count; // 统计人的个数。
//};
//
//// 静态成员在类外面定义
//int Person::_count = 0; 
//
//// 派生类
//class Student : public Person
//{
//protected:
//	int _stuNum; // 学号
//};
//
//// 派生类
//class Graduate : public Student
//{
//protected:
//	string _seminarCourse; // 研究科目
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
//	cout << " 人数 :" << Person::_count << endl;
//	cout << " 人数 :" << Student::_count << endl;
//	cout << " 人数 :" << s4._count << endl;
//
//	cout << endl;
//
//	cout << " 人数 :" << &Person::_count << endl;
//	cout << " 人数 :" << &Student::_count << endl;
//	cout << " 人数 :" << &s4._count << endl;
//
//	return 0;
//}

//class Person
//{
//public:
//	string _name; // 姓名
//};
//
//class Student : virtual public Person
//{
//protected:
//	int _num; //学号
//};
//
//class Teacher : virtual public Person
//{
//protected:
//	int _id; // 职工编号
//};
//
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // 主修课程
//};
//
//int main()
//{
//	Assistant a;
//	a._name = "Edison";
//
//	// 此时解决了数据冗余的问题
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

// 车类
class Car
{
protected:
	string _colour = "黑色"; // 颜色
	string _num = "川A66688"; // 车牌号
};

// 奔驰
class Benz : public Car
{
public:
	void Drive()
	{
		cout << "好开-操控" << endl;
	}
};

// 轮胎
class Tire {
protected:
	string _brand = "Michelin"; // 品牌
	size_t _size = 17; // 尺寸

};

// 汽车
class Car {
protected:
	string _colour = "黑色"; // 颜色
	string _num = "川A66688"; // 车牌号
	Tire _t; // 轮胎
};



