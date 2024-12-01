//98411432//
#include <stdio.h>

int main()
{
	int n,i,min,man,b,c;
	scanf("%d",&n);
	scanf("%d",&c);
	min=c;
	man=c;

	
	for ( i = 1; i < n; i++)
	{
		scanf("%d",&b);
		if (min > b)
		{
			man = min;
			min = b;
		}
		else if (man > b)
			man = b;
	}
	if(man<2)
	  printf("0");
	else
	{
		printf("%d",man);
	}
	  

	return (0);
}