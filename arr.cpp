#include<stdio.h>
#include<conio.h>
int f1(int n)
{

	if(n>0)
	f1(n-1);
	if(n%2==0)
	printf("%d\n",n);
	
}


int main()
{
	int num;
	printf("Recursion ");
	scanf("%d",&num);
	f1(num);
	
	
}
