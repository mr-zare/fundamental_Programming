#include <stdio.h>

int main()
{
	int n,i,j,arr[10][10],ray[10][10],array[10][10];
	scanf("%d",&n);
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			scanf("%d ",(*(arr+i)+j));
		}		
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d",(*(ray+i)+j));
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <n; j++)
		{
		*(*(array+i)+j)=(*(*(arr+i)+j))+(*(*(ray+i)+j));
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ",(*(*(array+i)+j)));
		}
		printf("\n");
	}
	return (0);
}