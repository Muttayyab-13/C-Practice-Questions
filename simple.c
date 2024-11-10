#include <stdio.h>
#include<conio.h>


int main () {
	int row;
	int col;
	for(row;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{printf("%d",col);
		}
		printf("\n");
	}
	return 0;
}
