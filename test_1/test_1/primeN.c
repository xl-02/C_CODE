#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ж����������Ƿ�Ϊ����
int main() {
	int a = 0;
	int i = 2;
	int flag = 0;
	printf("���a��ֵ:");
	scanf("%d",&a);
	for (i = 2;i <= a;i++) {
		if (i / a == 0)
			break;
		else
			flag = 1;
	}
	if (flag == 0) {
		printf("%d������",a);
	}
	else {
		printf("%d��������", a);
	}
	return 0;

}