#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	int c = 0;
	a = rand() % 100 + 1;
	printf("��Ϸ��ʼ��������1-100������\n");
	scanf("%d", &b);
	if (b!=a)
	{
		while (b != a)
		{
			if (b < a)
			{
				printf("���µ�����С��,������һ��");
				scanf("%d", &b);
				c++;
			}
			else
			{
				printf("���µ����ִ���,������һ��");
				scanf("%d", &b);
				c++;
			}	
		}
		printf("you win\n");
		c++;
		printf("�㻨��%d�λ����������ս", c);
	}
	else
	{
		printf("you win");
		c++;
		printf("�㻨��%d�λ����������ս", c);
	}
	return 0;
}