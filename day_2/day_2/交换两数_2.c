#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//2. ����������ʱ����������������������

int main() {
	
	int a = 10;
	int b = 20;
	printf("����ǰa��b�ֱ�Ϊ%d,%d\n", a, b);

/*	//1���Ӽ���
	a = a + b;
	b = a - b;
	a = a - b;
	printf("������a��b�ֱ�Ϊ%d,%d\n", a, b);*/
	

	//2�����
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("������a��b�ֱ�Ϊ%d,%d\n", a, b);
	return 0;
}