#include <stdio.h>
#include <string.h>
int main()
{
	char  a[7][7];
	int i,j,m=0;
	for ( i = 0; i < 7; i++)
	{
		for ( j = 0; j < 7; j++)
		{
			scanf(" %c",&a[i][j]);
		}
		
		
	}
	for ( i = 0; i < 7; i++)
	{
		for ( j = 0; j < 7; j++)
		{
			if(i<=4)
			{if(a[i][j]=='o'&& a[i+1][j]=='o'  && a[i+2][j]=='.')
			{
				m=m+1;
			}
			}
			if(j<=4){
				if (a[i][j]=='o' && a[i][j+1]=='o' && a[i][j+2]=='.')
			{
					m=m+1;
			}
			}
			if(i>=2)
			{	if (a[i][j] == 'o' && a[i - 1][j] == 'o' && a[i - 2][j] == '.')
			{
					m = m + 1;
			}
			}
			if(j>=2)
			{	if (a[i][j] == 'o' && a[i][j - 1] == 'o' && a[i][j - 2] == '.')
			{
					m = m + 1;
			}
			}
		}
	}
	printf("%d",m);
	return (0);
}