#include <stdio.h>

int main()
{
	long long int a, b, c,k, i;
	int f = 0;
	scanf("%lld %lld", &a, &b);
	if (b > a)
	{
		c = a;
		a = b;
		b = c;
	}
	for (i = b; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0 && f == 0)
		{
			f = 1;
			c=i;
			printf("%lld", i);
		}
	}
	k=(a*b)/c;
	printf(" %d",k);

	

	return (0);
}