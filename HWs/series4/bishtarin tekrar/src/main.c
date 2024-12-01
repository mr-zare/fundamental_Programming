#include <stdio.h>

int main()
{
	int a[50],i,j,b[101]={0},max=0,m;	
	for ( i = 0; i < 50; i++)
	{
		scanf("%d",&a[i]);
	}
	for ( i = 1; i <= 100; i++)
	{
		for ( j = 0; j < 50; j++)
		{
			if(a[j]==i)
			   b[i]++;
		}
	}
	for ( i = 0; i <= 100; i++)
	{
		if(max<b[i]){
		   max=b[i];
		   m=i;
		}
	}
	printf("%d",m);
	return (0);
}