#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//һά���鴫��
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

//��ά���鴫��

//test(int arr[3][5])//ok?   ok
//{}
//
//test1(int arr[][5])
//{}
//
////test2(int arr[3][])//ok?   error ��ά���鴫����������ʡ��
////{}
//
//test3(int (*arr)[5])//���������Ⱥͷ����ϣ�Ҫ������ָ����뽫�����ò������ͱ�����������������
//{}//��ά������������������һ��Ԫ�صĵ�ַ��Ҳ����һ��һά�����ָ��
//
//int main()
//{
//	int arr[3][5] = { 0 };//��ά���鶨�弰��ʼ������ָ���еĴ�С
//	test(arr);//��ά���鴫��
//	test1(arr);
//	//test2(arr);
//	test3(arr);
//
//	return 0;
//}

//һ��ָ�봫��

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

//����ָ�봫��

//test(int** p)
//{}
//int main()
//{
//	int* p;
//	int** pp = &p;
//	test(&p);
//	test(pp);
//	int* arr[10];
//	test(arr);//ָ������Ҳ���Դ�������ָ��
//
//	return 0;
//}

//����ָ�� - ָ�������ָ��
//����ָ�� - ָ������ָ��

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
//	//&(������) �� ������ ���Ǻ����ĵ�ַ
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	int (*pa)(int, int) = Add;//��������ָ��
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


//�������δ���ȼ�,��Ϊsignal����������
void(*      signal(int,  void(*)(int) )     )(int);

typedef void(*pfun_t)(int);
pfun_t signal(int, pfun_t);

//ע��������ߵ�����
typedef unsigned int uint;
typedef void(*pfun_t)(int);

