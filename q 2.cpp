#include<stdio.h>
#include<conio.h>
int pr(int x);

	int main()
{
	int num;
	
	printf("Enter a Number\n");
	scanf("%d",&num);
pr(num);
	
	
	}	
	
int pr(int x)
{
	if(x>=1)
	pr(x-1);
	printf("%d\n",x);

	
}
