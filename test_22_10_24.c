#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

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
//
//	//ʹ�ú���ָ����ú������Բ��ý����ã���ֱ�ӽ�����ָ�뵱��������ʹ��
//	printf("%d\n", pa(a, b));
//	printf("%d\n", (pa)(a, b));
//	printf("%d\n", (*pa)(a, b));
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int* a = 10;
//	int (*pa)(int, int) = Add;
//
//	//����ָ�����飬�ں���ָ���������[x]
//	int (*parr[4])(int, int) = { Add, Sub, Mul, Div};
//
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));
//	}
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//
////ָ��my_strcpy�ĺ���ָ��
//char* (*pf)(char*, const char*) = my_strcpy;
////���4��my_strcpy���ͺ�����ָ������
//char* (*pfArr[4])(char*, const char*);


//ʵ�ּ�����

void menu()
{
	printf("************************\n");
	printf("**  1. add    2. sub  **\n");
	printf("**  3. mul    4. div  **\n");
	printf("**  5. xor    0. exit **\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int Xor(int x, int y)
{
	return x ^ y;
}

//����1(������Xor����)
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	
//
//	return 0;
//}

//����2������Xor������
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//���ú���ָ�����������������ʽ����ͬ���ͣ������ͷ���ֵ������ͬ�����к�����,���򻯴��� - ʵ��ת�Ʊ�
//	int(*pfArr[])(int, int) = {0, Add, Sub, Mul, Div, Xor };
//	int sz = sizeof(pfArr) / sizeof(pfArr[0]);
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= sz-1)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	
//
//	return 0;
//}

//����3��������Xor������
void Calc(int(*pf)(int, int))//����ָ����Ϊ��������
{
	int x = 0;
	int y = 0;
	printf("����������������:>");
	scanf("%d%d", &x, &y);
	printf("%d\n",pf(x,y));//pf��Ӧ�ĺ�������Ϊ�ص�����
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	

	return 0;
}