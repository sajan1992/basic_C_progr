#include<stdio.h>
int main()
{
	char comp[51],addr[51],name[51];
	long int phone;
	printf("Enter your name \n");
	fgets(name,50,stdin);
	printf("Enter your company name\n");
	fgets(comp,50,stdin);
	printf("Enter your company's address\n");
	fgets(addr,50,stdin);
	printf("Enter your phone number\n");
	scanf("%ld",&phone);

	printf("\nCompany : %s \nAddress : %s \nPhone   : %ld \nName    : %s \n",comp,addr,phone,name);
	return 0;
}



