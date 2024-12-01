#include <stdio.h>

int main()
{
	int i,j,n,m,s=0;
	char a[100][100];
	scanf("%d %d",&n,&m);
	for ( i = 0; i < n; i++)
	{
		scanf("%s",a[i]);
	}
	for ( i = 0; i < n; i++)
	{
		for ( j= 0; j < m; j++)
		{
			if(a[i][j]=='*')
			   s=s+1;
		}
		
	}
	printf("%d",s);
	



	return (0);
}