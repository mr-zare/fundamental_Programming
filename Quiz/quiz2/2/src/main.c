#include <stdio.h>

int tavan(int x, int y);
int fact(int i);

int main()
{
	int n,x,i,a,b,f=1;
	float s=0;
	scanf("%d %d",&n,&x);
	for ( i = 0; i <= n; i=i+2)
	{
		a=tavan(x,i);

		b=fact(i);
		s=s+(f*(float)a/b);
		f=f*-1;
	}
	printf("%.3f",s);



	return (0);
}




int tavan(int x, int y)
{
	if (y == 0)
		return 1;
	else
	{
		return x * tavan(x, y - 1);
	}
}

int fact(int i)
{
	if (i == 0)
		return 1;
	else
	{
		return i * fact(i - 1);
	}
}
