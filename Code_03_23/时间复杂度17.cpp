#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;


//void calc(int n)
//{
//	int sum = 0;                   //执行1次  
//	for(int i = 1; i <= n; ++i)    //执行(判断)n+1次
//	{
//	    sum = sum + i;            //执行n次
//	}
//	cout << sum << endl;            //执行1次
//}



//void calc2(int n)
//{
//    int sum = 0;                       //执行1次  
//    for(int i = 1; i <= n; ++i)       //执行(判断)n+1次
//    {
//        sum = sum + i;               //执行n次
//    }
//    for(int j = 1; j <= n; ++j)       //执行n + 1次
//    {
//        for(int k = 1; k <= n; ++k)   //执行n*(n + 1)次
//        {
//            sum = sum + k;           //执行n*n次
//        }
//    }
//    ⑬cout << sum << endl;               //执行1次
//}


//int testfunc(int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		sum = sum + i;
//	}
//	return sum;
//}
//
//void calc3(int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		sum = sum + testfunc(i);
//	}
//}



//void calc4(int n)
//{
//	int i = 100;
//	int j = 15;
//	int sum = i + j + n;
//	cout << sum << endl;
//}


//void calc5(int n)
//{
//	int i = 1;
//	while (i <= n)
//	{
//		i = i * 2;
//	}
//}


//void calc6(int n)
//{
//    int i = 1;
//    for (int count = 0; count < n; ++count)
//    {
//        while (i <= n)
//        {
//            i = i * 2;
//        }
//    }
//}


//void calc7(int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		sum += i;
//	}
//}



//void calc8(int n)
//{
//    int sum = 0;
//    for (int i = 1; i <= n; ++i)
//    {
//        for (int j = 1; j <= n; ++j)
//        {
//            sum++;
//        }
//    }
//}



//void calc81(int n)
//{
//    int sum = 0;
//    for (int i = 1; i <= n; ++i)
//    {
//        for (int j = i; j <= n; ++j)
//        {
//            sum++;
//        }
//    }
//}


//void calc9(int m, int n)
//{
//    int sum = 0;
//    for (int i = 1; i <= m; ++i)
//    {
//        for (int j = 1; j <= n; ++j)
//        {
//            sum++;
//        }
//    }
//}


//void calc10(int m, int n)
//{
//	int sum1 = 0;
//	for (int i = 1; i <= m; ++i)
//	{
//		sum1 += i;
//	}
//
//	int sum2 = 0;
//	for (int j = 1; j <= n; ++j)
//	{
//		sum2 += j;
//	}
//}


void calc11(int array[], int n, int x)
{
    int pos = -1;
    for (int i = 0; i < n; ++i)
    {
        if (array[i] == x)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        cout << "没找到值为" << x << "的元素" << endl;
    }
    else
    {
        cout << "找到了值为" << x << "的元素，其在数组中的位置下标为：" << pos << endl;
    }
}

int main()
{
    int asz[5] = { 1,2,3,4,5 };
    calc11(asz, 5, 3); //5：数组中元素个数，3：要在数组中查找的值

	return 0;
}