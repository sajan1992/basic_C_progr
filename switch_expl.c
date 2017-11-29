#include<stdio.h>
int main()
{
	int num1,num2,ch;
	printf("Enter value for num1\n");
	scanf("%d",&num1);
	printf("Enter value for num2\n");
	scanf("%d",&num2);
	printf("Enter the choice:\n1.ADD\n2.Sub\n3.Mul\n4.Div\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("%d + %d = %d\n",num1,num2,(num1+num2));
			break;
		case 2:
			printf("%d - %d = %d\n",num1,num2,(num1-num2));
			break;
		case 3:
			printf("%d * %d = %d\n",num1,num2,(num1*num2));
			break;
		case 4:
			printf("%d / %d = %d\n",num1,num2,(num1/num2));
			break;
		default:
			printf("Invalid choice\n");
			break;
	}

}





