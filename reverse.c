#include<stdio.h>
int main()
{
	int a,c;
	printf("Enter number to be reversed\n");
	scanf("%d",&a);
	c=a;
	printf("reverse number \n");
	while(c%10!=0)
	{
		printf("%d",c%10);
		c=c/10;
	}
}

