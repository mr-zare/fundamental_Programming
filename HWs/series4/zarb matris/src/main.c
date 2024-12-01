#include <stdio.h>

int main()
{
	int n1,n2,n3,a[10][10],b[10][10],i,j,c[10][10]={0},k;
	scanf("%d %d %d",&n1,&n2,&n3);
	for ( i = 0; i <n1 ; i++)
	{
		for ( j = 0; j<n2 ; j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	for (i = 0; i < n2; i++)
	{
		for (j = 0; j < n3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for ( i = 0; i < n1; i++)
	{
		for ( j = 0; j <n3 ; j++)
		{
			for ( k = 0; k <n2 ; k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
			
		}
		
	}
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n3; j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

	return (0);
}