#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b )
	{
		int temp=*a;
		*a=*b;
		*b=temp;
		
		
		}
	

int main ()
{
	
	int p=10;
	int q=20;
	
	swap(&p,&q);
	
	
	printf("values after swapping are %d and %d",p,q);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

