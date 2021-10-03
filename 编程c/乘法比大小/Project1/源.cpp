#include<stdio.h>
int main()
{
	int a, b, c;
		a = 5;
		b = 7;
		c = (a * b > b ? a * b : b);
		printf("%d\n", c);
		return 0;
}
