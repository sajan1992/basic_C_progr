#include<stdio.h>
void hex(int);
void octal(int);
int main()
{
	int input,ch;
	printf("Enter the input:\n");
	scanf("%d",&input);
	printf("Enter the choice\n1.Octal\n2.Hex\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			octal(input);
			break;
		case 2:
			hex(input);
			break;
		default:
			printf("Invalid choice\n");
			break;

	}
	
	return 0;
}//end of main
//function for octal conversion begins
void octal(int a)
{
	int in=a,in2=a,t=0,limit;
	while(in2!=0)
	{
		in2=in2/8;
		t++;
		
	}
	limit=t;
	int arr[t];
	while(in!=0)
	{	
		arr[t-1] = in%8;
		in=in/8;
		t--;
	}
	printf("Octal value of given number:\n");
	for(int i=0;i<limit;i++)
		printf("%d",arr[i]);
		printf("\n");
}//octal function ends
//function for hexadecimal conversion begins
void hex(int a)
{
	int in=a,in2=a,t=0,limit;
	while(in2!=0)
	{
		in2=in2/16;
		t++;
		
	}
	limit=t;
	int arr[t];
	while(in!=0)
	{	
		arr[t-1] =in%16;
		in=in/16;
		t--;
	}
	printf("Hex value of given number:\n");
	for(int i=0;i<limit;i++)
	{
		
		if(arr[i]>9)
		{
			switch(arr[i])
			{
				case 10:
					printf("A");
					break;
				case 11:
					printf("B");;
					break;
				case 12:
					printf("C");
					break;
				case 13:
					printf("D");
					break;
				case 14:
					printf("E");
					break;
				case 15:
					printf("F");
					break;
			}
		}
		else
		printf("%d",arr[i]);

	}

		printf("\n");
}//end of hexadecimal conversion		
