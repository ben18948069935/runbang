#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int compare(int a, int b)
{
	if (a > b)
		printf("���ֵ��%d\n", a);//���Ը�Ϊreturn a��

	else
		printf("���ֵ��%d\n", b);//���Ը�Ϊreturn b��
	return 0;
}



int main()
{
	int a, b;
	printf("������a��ֵ\n");
	scanf("%d", &a);
	printf("������b��ֵ\n");
	scanf("%d", &b);
	compare(a, b);
	return 0;
}