#include <stdio.h>

int main()
{
	int n,i,j,t;
	scanf("%d",&n);
	for ( i = 2; i < n; i++)
	{
		t=0;
		for (j= 1; j<=i ; j++)
		{
			if (i%j==0)
			{
				t=t+1;
			}
		}
		if(t==2)
			 printf("%d\n",i);
		
		
	}
	

	return (0);
}