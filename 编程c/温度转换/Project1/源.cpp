#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float 华氏度, 摄氏度, c;
	printf("请输入你想转换的华氏度");
	scanf("%f", &华氏度);
	c = 华氏度 - 32;
	摄氏度 = (5.0 / 9) * c;//在c语言中没有声明类型的被除数比除数大的会直接等于0
	printf("您输入华氏度对应摄氏度为%f\n",摄氏度);
	return 0;
}