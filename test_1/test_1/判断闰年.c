#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	int a = 0;
	printf("�����뵱ǰ��ݣ�");
	scanf("%d",&a);
	if (a % 4 == 0) {
		if (a % 100 == 0) {
			if (a % 400 == 0) {
				printf("%d������", a);
			}
			else {
				printf("%d��������", a);
			}
		}
		else {
			printf("%d������", a);
		}
	}
	else {
		printf("%d��������",a);
	}
	 
 


	 

}