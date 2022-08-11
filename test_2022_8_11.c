#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////10进制浮点数转换为二进制浮点数，小数点后位权重依次为：1/2,(1/2)^2,(1/2)^3....
//int main()
//{
//	float f = 5.5;//101.1
//	//101.1 = (-1)^0 * 1.011 * s^2  ->   s = 0, M = 1.011, E = 2
//	//0 （100 0000 1） （011 0000 0000 0000 0000 0000）   0x40B00000 -> 00 00 b0 40
//   // S     E+127              M的小数部分
//
//	return 0;
//}


int main()
{
	int n = 9;
	//00000000 00000000 00000000 00001001
	float *pFloat = (float *)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);//指数位全为0，表示无穷小
	*pFloat = 9.0;
	//9.0 = 1001.0 = 1.001 * 2^3    S = 0,E = 3(130:10000010),M = 1.001
	//内存: 01000001000100000000000000000000
	printf("num的值为：%d\n", n);//1091567616
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}
