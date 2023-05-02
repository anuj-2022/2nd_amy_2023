#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[5],tmp;

	printf("Enter the data :\n ");
	scanf("%s",str);

	tmp=str[0];
	str[0]=str[1];
	str[1]=tmp;

	printf("Result %s\n",str);

	return 0;
}
