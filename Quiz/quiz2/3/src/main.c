#include <stdio.h>

int main()
{
	int n,i,j,a;
	scanf("%d",&n);
	a=2*n-1;
	for ( i = 1; i <=n; i++)
	{
		for ( j = 1; j <=n; j++)
		{
			if((i+j)%2==1)
			   printf("%d",i);
			else
			{
				printf(" ");
			}
		}
		printf("\n");	
	}
	for (i = n-1; i <=1; i--)
	{
		for (j =1; j <= n; j++){
			if((i+j)%2==1)
			  printf("%d",i);
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
			return (0);
	}