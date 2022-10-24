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
//	//&(函数名) 和 函数名 都是函数的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	int (*pa)(int, int) = Add;//创建函数指针
//
//	//使用函数指针调用函数可以不用解引用，即直接将函数指针当作函数名使用
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
//	//函数指针数组，在函数指针名后加上[x]
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
////指向my_strcpy的函数指针
//char* (*pf)(char*, const char*) = my_strcpy;
////存放4个my_strcpy类型函数的指针数组
//char* (*pfArr[4])(char*, const char*);


//实现计算器

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

//代码1(不包含Xor函数)
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	
//
//	return 0;
//}

//代码2（包含Xor函数）
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//利用函数指针数组可以以数组形式调用同类型（参数和返回值类型相同的所有函数）,大大简化代码 - 实现转移表
//	int(*pfArr[])(int, int) = {0, Add, Sub, Mul, Div, Xor };
//	int sz = sizeof(pfArr) / sizeof(pfArr[0]);
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= sz-1)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	
//
//	return 0;
//}

//代码3（不包含Xor函数）
void Calc(int(*pf)(int, int))//函数指针作为函数参数
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	printf("%d\n",pf(x,y));//pf对应的函数被称为回调函数
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
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
			printf("退出程序\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	

	return 0;
}