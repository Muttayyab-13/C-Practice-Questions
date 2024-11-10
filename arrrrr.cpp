#include<stdio.h>
#include<conio.h>

void  arr_sum(int arr1[],int arr2[],int n);	
void input(int n,int arr[],int arr1[]);


int main ()
{
	int n=5;

int arr[n];
int arr1[n];
input( n, arr,arr1);
for(int i=0;i<n;i++)
{
	printf("ar=%d\n",arr[i]);
	printf("ar1=%d\n",arr1[i]);
	
	
}
arr_sum(arr, arr1,n);
 
 int a3[n];
 for(int i=0;i<n;i++)
 {
 	printf("  %d  ",a3[i]);
 }	
	
}

void input(int n,int arr[],int arr1[])
{
	for(int i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
		scanf("%d",&arr1[i]);
	}
}

void  arr_sum(int arr1[],int arr2[],int n)
{
	
	int a3[n];
	for(int i=0;i<n;i++)
	{
	a3[i]=arr1[i]+arr2[i];	
	} 
	
}
