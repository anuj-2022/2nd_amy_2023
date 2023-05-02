#include<stdio.h>
#include<stdlib.h>

int search_data(int *data1,int len,int dd);

int main()
{
	int n=0;
	printf("Please enter the the length od array\n:");
	scanf("%d",&n);

	int data[n],i,d;
	for(i=0;i<n;i++)
	{
		printf("Please enter the data %d :\n",i+1);
		scanf("%d",&data[i]);
	}
	printf("Please enter the data to search :\n");
	scanf("%d",&d);
	i=search_data(data,n,d);
	if(i == -1)
		printf("data not found :\n");
	else
		printf("data is found at index %d :\n",i);

	return 0;
}

int search_data(int *data1,int len,int dd)
{
	int i;
	for(i=0; i<len; i++)
	{
		if(data1[i] == dd)
			return i;
	}
	return -1;
}
