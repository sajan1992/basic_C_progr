#include<stdio.h>
int fact(int);
int main()
{
	int a,facto;
	printf("Enter value for its factorial\n");
	scanf("%d",&a);
	facto = fact(a);
	printf("Factorial of number = %d\n",facto);
}
int fact(int a)
{
	if(a !=1)
	return(a*fact(a-1));
	else
	return(1);
}

