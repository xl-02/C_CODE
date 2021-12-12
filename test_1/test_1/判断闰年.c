#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int a = 0;
	printf("请输入当前年份：");
	scanf("%d",&a);
	if (a % 4 == 0) {
		if (a % 100 == 0) {
			if (a % 400 == 0) {
				printf("%d是闰年", a);
			}
			else {
				printf("%d不是闰年", a);
			}
		}
		else {
			printf("%d是闰年", a);
		}
	}
	else {
		printf("%d不是闰年",a);
	}
	 
 


	 

}