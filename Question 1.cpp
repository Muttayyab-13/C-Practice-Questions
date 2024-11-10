#include<stdio.h>
#include<conio.h>
void f1(int a);
int main ()
{
	int n;
printf("Enter a number\n");
scanf("%d",&n)	;
	f1(n);
	return 0;
}
void f1(int n)
{

	if(n>=1)
	f1(n-1);
		printf("%d",n);
}
