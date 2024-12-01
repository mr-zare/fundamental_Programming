#include <stdio.h>

int main()
{
	long int n,i=2,a,b,c,d,j=0;
	scanf("%ld",&n);
	a=1;
	b=2;
	if (n==1)
	{
		printf("%d",a);
		j=1;
	}
	if (n==2)
	{
		printf("%d",b);
		j=1;
	}
	for ( i = 3; i <=n;i++)
	{
		c=a+b;
		d=a;
		a=b;
		b=c;
	}
	if (j==0)
	{
		printf("%ld",b);
	}
	
	
	return (0);
}