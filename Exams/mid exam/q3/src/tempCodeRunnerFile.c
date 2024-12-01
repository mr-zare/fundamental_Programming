#include <stdio.h>

int main()
{
	int n,i,a,b,c,e;
	scanf("%d",&n);
	scanf("%d \n%d",&a,&b);
	if(b>a){
	   c=a;
	   a=b;
	   b=c;

	}
	for ( i = 2; i < n; i++)
	{
		scanf("%d",&e);
		if(e>=b && e<a)
		   b=e;
		if(e>a)
		  a=e;
	}
	printf("%d %d ",b,a);