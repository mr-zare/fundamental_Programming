#include <stdio.h>

int main()
{
	long int n, a = 0, f = 0, b;
	scanf("%ld", &n);
	b = n;
	while (f == 0)
	{
		a = a * 10 + (n % 10);
		n = n / 10;
		if (n == 0)
			f = 1;
	}
	if (a == b)
		printf("YES");
	else
	{
		printf("NO");
	}

	return (0);
}
