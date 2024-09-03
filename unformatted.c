#include<stdio.h>
int main()
{
	char s;
	do
	{
		printf("Enter a charater:");
		s= getchar();
		printf("you entered :%c\n",s);
	}
	while(s!='\n');
	return 0;
}
