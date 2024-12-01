#include <stdio.h>

int main()
{
	int n,a[100],b[100],i,j,c;
	scanf("%d",&n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d",&b[i]);
	}
	for (i = 0; i <n; i++)
	{
		for ( j = 0; j <n-1 ; j++)
		{
			if(a[j]<a[j+1])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
				c = b[j];
				b[j] = b[j + 1];
				b[j + 1] = c;
			}
		}
	}
	for ( i = 0; i <n; i++)
	{
		printf("%d ",b[i]);
	}
	

	return (0);
}