#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//对不同变量进行初始化肯定开辟了两块不同的空间，但这两个变量的内容可以是相同的;使用常量字符串进行初始化，常量字符串在内存中开辟唯一空间（没有必要开辟俩空间）。
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//常量地址内容都不会变，因此加上const一旦常量被更改程序会报错，否则就算常量被更改某些编译器也不会报错
//	const char* p2 = "abcdef";
//	
//	/*if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}*/
//
//	//if (p1 == p2)
//	//if (&p1 == &p2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//
//	return 0;
//}

//指针数组  是数组,用来存放指针
//int main()
//{
//	//整型数组
//	int arr[10] = { 0 };
//	//字符数组
//	char ch[5] = { 0 };//字符变量初始化为整型，则整型是该字符的ASCII码值
//	//printf("%c\n", ch[0]);
//
//	//指针数组
//	int* parr[4];//存放整型指针的数组 -> 指针数组;当只是定义了数组，但没有初始化时必须指定数组大小，否则报错
//	char* pch[5];//字符指针数组
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int* arr[4] = { &a, &b, &c, &d };
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//
//	return 0;
//}

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 2, 3, 4, 5, 6 };
	int arr3[] = { 3, 4, 5, 6, 7 };
	int* parr[] = { arr1, arr2, arr3 };//使用一个一维数组维护了三个一维数组

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i]+j));
		}
		printf("\n");
	}

	return 0;
}