#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>

//无符号字符型(unsigned char)：0->1->2->......->254->255->0->1->....
/*//int main()//{//	double a = 1E10;//	printf("%lf\n", a);////	return 0;//}*/int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);

	return 0;
}