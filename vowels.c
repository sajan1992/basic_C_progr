#include<stdio.h>
int main()
{
	char c;
	printf("Enter an alphabet:\n");
	scanf("%c",&c);
	if(c == 'A' || c == 'a'||c == 'e'||c == 'E'|| c == 'i'||c == 'I'|| c == 'O'|| c == 'o'||c =='u' || c == 'U')
		printf("Yes,its a vowel\n");
	else
		printf("No,its not a vowel\n");
}

