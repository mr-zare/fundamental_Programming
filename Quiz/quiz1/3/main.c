#include <stdio.h>

int main()
{
	int n,a,b,c,d;
	scanf("%d",&n);
	n=1000-n;
	a=n/25;
	n=n-(a*25);
	b=n/10;
	n=n-(b*10);
	c=n/5;
	n=n-(c*5);
	d=n;
	printf("%d*(25),",a);
	printf("%d*(10),",b);
	printf("%d*(5),",c);
	printf("%d*(1)",d);

		return (0);
}