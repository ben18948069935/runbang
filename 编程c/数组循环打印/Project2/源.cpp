#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a,b;
	int arr1[20];
	for (int a = 0; a <= 10; a++)
	{
		arr1[a]=a+10;
	}
	for (int b = 0; b <= 10; b++)
	{

		printf("arr1[%d]=%d\n", b, arr1[b]);
	}
	return 0;
}