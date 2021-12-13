#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2. 不允许创建临时变量，交换两个数的内容

int main() {
	
	int a = 10;
	int b = 20;
	printf("交换前a和b分别为%d,%d\n", a, b);

/*	//1、加减法
	a = a + b;
	b = a - b;
	a = a - b;
	printf("交换后a和b分别为%d,%d\n", a, b);*/
	

	//2、异或法
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("交换后a和b分别为%d,%d\n", a, b);
	return 0;
}