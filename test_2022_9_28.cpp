#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//����ָ��-ָ��
//int main()
//{
//	//int* p = NULL;//����ָ��--ָ�����͵�ָ��--���Դ�����͵ĵ�ַ
//	//char* pc = NULL;//�ַ�ָ��--ָ���ַ���ָ��--���Դ���ַ��ĵ�ַ
//	//����ָ��--ָ�������ָ��--���Դ������ĵ�ַ
//
//	//int arr[10] = { 0 };
//	//arr: ������Ԫ�ص�ַ
//	//&arr[0]:������Ԫ�ص�ַ
//	//&arr:����ĵ�ַ
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10] = &arr;//p��Ϊ����ָ��
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*p)[5]= &arr;//pΪָ���ַ�ָ�����������ָ��
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
//		printf("%d ", *((int*)pa + i));//Ҳ����ֱ�ӽ���������������ָ��
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
			//printf("%d ", *(*(pa + i) + j));//������ָ����н����ò����õ�����������������Ԫ�ص�ַ��
			printf("%d ", pa[i][j]);//*(pa+i)  =====    pa[i]
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print1(arr, 3, 5);//��ӡ��ά����arr
	print2(arr, 3, 5);//��ά�����������е�ַ

	return 0;
}