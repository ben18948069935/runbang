#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	int c = 0;
	a = rand() % 100 + 1;
	printf("游戏开始，请输入1-100的数字\n");
	scanf("%d", &b);
	if (b!=a)
	{
		while (b != a)
		{
			if (b < a)
			{
				printf("您猜的数字小了,请再试一次");
				scanf("%d", &b);
				c++;
			}
			else
			{
				printf("您猜的数字大了,请再试一次");
				scanf("%d", &b);
				c++;
			}	
		}
		printf("you win\n");
		c++;
		printf("你花了%d次机会完成了挑战", c);
	}
	else
	{
		printf("you win");
		c++;
		printf("你花了%d次机会完成了挑战", c);
	}
	return 0;
}