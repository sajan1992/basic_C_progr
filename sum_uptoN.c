#include<stdio.h>
int main()
{
	int a,j;
	char i=' ';
	printf("Enter value for a:\n");
	scanf("%d",&a);
b:
	printf("enter \'y\' to add else \'n\'\n");
	getchar();
	scanf("%c",&i);

	if(i=='y'||i =='Y')
	{

		printf("enter the value to be added:\n");
		//getchar();
		scanf("%d",&j);

		a=a+j;
		goto b;
	}
	else if (i == 'n' || i == 'N');
	{
		printf("value of a -> %d\n",a);
	}




}
