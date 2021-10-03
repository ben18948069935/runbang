#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int a = 0;
int b = 0;
void print(int a)
{
	if (a > 9)
	{
		print(a / 10);
		Sleep(800);
	}
	Sleep(800);
	printf("%d", a % 10);
	
}
int main()
{
	scanf("%d", &a);
	print(a);
	return 0;
}
