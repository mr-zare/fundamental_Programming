#include <stdio.h>

int main()
{
	int a,min=9999;
	do
	{
		scanf("%d ",&a);
		if(a<min)
		  min=a;
	} while (a!=9999);
	printf(" %d",min);
	

	return (0);
}