#include <stdio.h>
int aval(int b);
int maq(int a);
int main()
{
	int n,f=0,j=0,k,i;
	scanf("%d",&n);
	while (f!=n)
	{
		j=j+1;
		k=aval(j);
		i=maq(j);
		if(k!=0 && i==1){
			f=f+1;
		}

	}
	printf("%d",j);
	return (0);
}

int aval(int b)
{
	int i, t = 0;
	for (i = 1; i <= b; i++)
	{
		if (b % i == 0)
			t = t + 1;
	}
	if (t == 2)
		return b;
	else
	{
		return 0;
	}
}
int maq(int a)
{
	int i=0,m;
	m=a;
	while (m!=0)
	{
		i=i*10+(m%10);
		m=m/10;
	}
	if(i==a)
	  return 1;
	else
	{
		return 0;
	}
}