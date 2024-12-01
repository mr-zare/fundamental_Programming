#include <stdio.h>
int main()
{
	int n,i,s=1,a,j,f=0;
	scanf("%d",&n);
	if (n<0)
	{
		n=n*-1;
		f=1;
	}
	
	for ( i = 1; i <= n; i++)
	{
		a=0;
		for ( j = 1; j <= i; j++)
		{
			if(i%j==0)
			   a++;
		}
		if(a>=3 || i==1)
		  s=s*i;
		
	}
	if (f==1)
	{
		s=s*-1;
	}
	
	printf("%d",s);

	return (0);
}