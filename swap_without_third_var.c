#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("after swap \nnum1 -> %d \nnum2 -> %d",num1,num2);
}

