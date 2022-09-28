#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//数组指针-指针
//int main()
//{
//	//int* p = NULL;//整型指针--指向整型的指针--可以存放整型的地址
//	//char* pc = NULL;//字符指针--指向字符的指针--可以存放字符的地址
//	//数组指针--指向数组的指针--可以存放数组的地址
//
//	//int arr[10] = { 0 };
//	//arr: 数组首元素地址
//	//&arr[0]:数组首元素地址
//	//&arr:数组的地址
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10] = &arr;//p即为数组指针
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*p)[5]= &arr;//p为指向字符指针数组的数组指针
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//
//	printf("\n");
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));
//	}
//
//	printf("\n");
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((int*)pa + i));//也可以直接将数组名赋给整型指针
//	}
//
//	printf("\n");
//
//	printf("%p %p", arr, pa);
//
//
//	return 0;
//}

void print1(int arr1[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
}

void print2(int (*pa)[5],int x,int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			//printf("%d ", *(*(pa + i) + j));//对数组指针进行解引用操作得到了数组名（数组首元素地址）
			printf("%d ", pa[i][j]);//*(pa+i)  =====    pa[i]
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print1(arr, 3, 5);//打印二维数组arr
	print2(arr, 3, 5);//二维数组名是首行地址

	return 0;
}