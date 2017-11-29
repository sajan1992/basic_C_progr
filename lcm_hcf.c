#include<stdio.h>
int getlcm(int,int,int);
int gethcf(int,int,int);
int main()
{
	int a,b,c,ch,lcm,hcf;
	printf("Enter 3 values :\n");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("Enter the choice\n1.LCM\n2.HCF\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			lcm = getlcm(a,b,c);
			printf("LCM of %d,%d,%d is -> %d\n",a,b,c,lcm);
			break;
		
		case 2:
			hcf = gethcf(a,b,c);
			printf("HCF of %d,%d,%d is -> %d\n",a,b,c,hcf);
			break;
		default:
			printf("\nInvalid choice\n");
	}
}
int gethcf(int a,int b,int c)
{
	int fst,sec,thrd,ls,t=1;
	fst=a;
	sec=b;
	thrd=c;
	ls=fst;
	if(ls>sec)
		ls = sec;
	if(ls>thrd)
		ls = thrd;
	for(int i=1;i<=ls;i++)
	{
		if(fst%i==0 && sec%i==0 && thrd%i==0)
		{
			if(t!=i)
			t=t*i;
		}	
	}
	return t;
}

int getlcm(int a,int b,int c)
{
	int fst,sec,thrd,gr,t=1;
	fst=a;
	sec=b;
	thrd=c;
	gr=fst;
	if(gr<sec)
		gr = sec;
	if(gr<thrd)
		gr = thrd;
	while((t*gr)%fst!=0 || (t*gr)%sec!=0 || (t*gr)%thrd !=0)
		t++;
	return (gr*t);
}

