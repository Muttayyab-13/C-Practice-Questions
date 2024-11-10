#include<stdio.h>
int add(int x,int y);

	int main()
{
	int num1,num2;
	
	printf("Enter two Numbers");
	scanf("%d %d ",&num1,&num2);
	add( num1, num2);
	printf("the sum of numbers is %d",add(num1,num2));
	
	
	}	
	
int add(int x,int y)
{
	return x+y;
	
}
