#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	//�Բ�ͬ�������г�ʼ���϶����������鲻ͬ�Ŀռ䣬�����������������ݿ�������ͬ��;ʹ�ó����ַ������г�ʼ���������ַ������ڴ��п���Ψһ�ռ䣨û�б�Ҫ�������ռ䣩��
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";//������ַ���ݶ�����䣬��˼���constһ�����������ĳ���ᱨ��������㳣��������ĳЩ������Ҳ���ᱨ��
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

//ָ������  ������,�������ָ��
//int main()
//{
//	//��������
//	int arr[10] = { 0 };
//	//�ַ�����
//	char ch[5] = { 0 };//�ַ�������ʼ��Ϊ���ͣ��������Ǹ��ַ���ASCII��ֵ
//	//printf("%c\n", ch[0]);
//
//	//ָ������
//	int* parr[4];//�������ָ������� -> ָ������;��ֻ�Ƕ��������飬��û�г�ʼ��ʱ����ָ�������С�����򱨴�
//	char* pch[5];//�ַ�ָ������
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
	int* parr[] = { arr1, arr2, arr3 };//ʹ��һ��һά����ά��������һά����

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