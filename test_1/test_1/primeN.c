#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//判读所输入数是否为素数
int main() {
	int a = 0;
	int i = 2;
	int flag = 0;
	printf("请给a赋值:");
	scanf("%d",&a);
	for (i = 2;i <= a;i++) {
		if (i / a == 0)
			break;
		else
			flag = 1;
	}
	if (flag == 0) {
		printf("%d是素数",a);
	}
	else {
		printf("%d不是素数", a);
	}
	return 0;

}