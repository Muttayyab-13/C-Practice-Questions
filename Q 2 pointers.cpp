# include <iostream>
#include<stdio.h>

int main ()
{
	int arrlen;
	int i;
	
	printf("Enter the lenth of array");
	scanf("%d",&arrlen);
	int arr[arrlen];
	
	printf("enter elements of array");
	for(int i=0;i<arrlen;i++)
	{
	scanf("%d",&arr[i]);	
	}
	
	for(i=0;i<arrlen;i++)
	{
		printf("\n%d",arr[i]);
	}
	
	int *p;
	int val;
	p=&arr[0];
	val=*p;
	printf("\n%d",val);
}
