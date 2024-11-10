#include<stdio.h>
#include<conio.h>

void  arr_sum(int arr1[],int arr2[],int n);	
void input(int n,int arr[],int arr1[]);


int main ()
{
	int n=5;
int a3[n];
int arr[n];
int arr1[n];
input( n, arr,arr1);
arr_sum( arr, arr1,n);
 
 for(int i=0;i<n;i++)
 {
 	printf("  %d  ",a3[i]);
 }	
	return 0;
}

void input(int n,int arr[],int arr1[])
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		scanf("%d",&arr1[i]);
	}
}

void  arr_sum(int arr1[],int arr2[],int a3[],int n)
{
	
	
	for(int i=0;i<n;i++)
	{
	a3[i]=arr1[i]+arr2[i];

		
	}  
}


