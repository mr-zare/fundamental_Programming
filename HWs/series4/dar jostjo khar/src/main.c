#include <stdio.h>

int main()
{
	long int i = 0, j = 0, k = 0, f = 1, t, m = 0;
	int x[100], y[100];
	scanf("%ld", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}
	i = 0;
	while (k < t)
	{
		i=0;
		j=0;
		f = 1;
		m = 0;
		while (i <= 5000 && j <= 5000)
		{
			if (i == x[k] && j == y[k])
			{
				printf("%ld\n", m);
				f = 0;
				break;
			}
			if ((m + 1) % 4 == 0)
			{
				i--;
				j++;
			}
			if ((m + 1) % 4 == 1)
			{
				i++;
				j++;
			}
			if ((m + 1) % 4 == 2)
			{
				i++;
				j--;
			}
			if ((m + 1) % 4 == 3)
			{
				i++;
				j++;
			}
			m++;
		}
		k++;
		if (f == 1)
		{
			printf("-1\n");
		}
	}
	return (0);
}
