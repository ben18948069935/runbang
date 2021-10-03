#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b)
{
	int z = 0;
	z = b + a;
	return z;
}
int main() {
int a=0;
int b=0;
int c = 0;
	scanf("%d%d" , &a, & b);
	c=add(a, b);
	printf("%d\n", c);
	return 0;
}