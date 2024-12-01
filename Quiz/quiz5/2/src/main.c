#include <stdio.h>
int main()
{
	int i,j,n,t=0;
	int  a[100],b[100],c[100];
	scanf("%d",&n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&b[i]);
	}
	for ( i = n-1; i >=0 ; i--)
	{
		t=0;
		c[i+1]=a[i]+b[i]+t;
		if(a[i]+b[i]>=10)
		{
			t=1;
		}
	}
	if (c[i]==0)
	    j=1;
	else
	{
		j=0;
	}
	
	for ( i = j; i <=n; i++)
	{
		
		printf("%d",c[i]);
	}
	return (0);
}