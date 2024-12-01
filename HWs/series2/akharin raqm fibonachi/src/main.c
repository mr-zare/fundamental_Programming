#include <stdio.h>

int main()
{
	long int n,c,i,a,b,r;
	a=0;
	b=1;
	r=0;	
	scanf("%ld",&n);
	if(n==1)
	   printf("%d",1);
	for ( i = 2; i <= n; i++)
	{
		c=a+b;
		r=c%10;
		a=b%10;
		b=c%10;
	}
	if(n!=1)
	   printf("%d",r);
	


	return (0);
}