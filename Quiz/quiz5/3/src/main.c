#include <stdio.h>

int main()
{
	int a[100][100]={0},i,j,b,c;
	scanf("%d",&n);
	c=(n/2)+1;
	a[c][c]=1;
	i=0;
	a[c][c+1]=2;
	a[c][c + 1] = 3;
	a[c-1][c + 1] = 4;
	a[c-1][c] = 5;
	a[c-1][c -1] = 6;
	a[c][c - 1] = 7;
	a[c-1][c - 1] = 8;
	a[c-1][c +1] = 9;
	b=10;

	for ( i = c; i < n; i++)
	{
		for ( j = c; i < n; j++)
		{
			
		}
				
	}
	
	return (0);
}