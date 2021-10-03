#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int compare(int a, int b)
{
	if (a > b)
		printf("最大值是%d\n", a);//可以改为return a；

	else
		printf("最大值是%d\n", b);//可以改为return b；
	return 0;
}



int main()
{
	int a, b;
	printf("请输入a的值\n");
	scanf("%d", &a);
	printf("请输入b的值\n");
	scanf("%d", &b);
	compare(a, b);
	return 0;
}