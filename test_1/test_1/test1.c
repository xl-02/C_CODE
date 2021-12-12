#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 

//int main() {
//	printf("%d\n",sizeof(char));    //1 字节
//	printf("%d\n",sizeof(short));   //2
//	printf("%d\n", sizeof(int));	//4
//	printf("%d\n",sizeof(long));	//4 sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n",sizeof(float));	//4
//	printf("%d\n", sizeof(double));//4
//	return 0;
//}
int main() {
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d%d",&a,&b);  //输入时中间加
	sum = a + b;
	printf("sum=%d\n",sum);

	return 0;
}