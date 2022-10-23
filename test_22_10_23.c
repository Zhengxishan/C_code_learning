#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//一维数组传参
//void test(int arr[])//ok?  ok
//{}
//
//void test(int arr[10])//ok?   ok
//{}
//
//void test(int* arr)//ok?   ok
//{}
//
//void test2(int* arr[20])//ok?   ok
//{}
//
//void test2(int** arr)//ok?    ok
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//
//	return 0;
//}

//二维数组传参

//test(int arr[3][5])//ok?   ok
//{}
//
//test1(int arr[][5])
//{}
//
////test2(int arr[3][])//ok?   error 二维数组传参列数不能省略
////{}
//
//test3(int (*arr)[5])//变量名优先和方框结合，要想其是指针必须将解引用操作符和变量名用括号括起来
//{}//二维数组的数组名是数组第一行元素的地址，也就是一个一维数组的指针
//
//int main()
//{
//	int arr[3][5] = { 0 };//二维数组定义及初始化必须指定列的大小
//	test(arr);//二维数组传参
//	test1(arr);
//	//test2(arr);
//	test3(arr);
//
//	return 0;
//}

//一级指针传参

//test1(int *p)
//{}
//
//test2(char* p)
//{}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1);
//
//	char ch = 'a';
//	char* p2 = &ch;
//	test2(&ch);
//	test2(p2);
//
//
//	return 0;
//}

//二级指针传参

//test(int** p)
//{}
//int main()
//{
//	int* p;
//	int** pp = &p;
//	test(&p);
//	test(pp);
//	int* arr[10];
//	test(arr);//指针数组也可以传给二级指针
//
//	return 0;
//}

//数组指针 - 指向数组的指针
//函数指针 - 指向函数的指针

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", Add(a, b));
//
//	//&(函数名) 和 函数名 都是函数的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	int (*pa)(int, int) = Add;//创建函数指针
//	printf("%d\n", (*pa)(a, b));
//
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello bit");
//
//	return 0;
//}


//下面两段代码等价,均为signal函数的声明
void(*      signal(int,  void(*)(int) )     )(int);

typedef void(*pfun_t)(int);
pfun_t signal(int, pfun_t);

//注意下面二者的区别
typedef unsigned int uint;
typedef void(*pfun_t)(int);

