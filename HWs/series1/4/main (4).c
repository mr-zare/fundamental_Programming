#include <stdio.h>

int main()
{
	int a,b,f,i;
	scanf("%d %d",&a,&b);
	a=11-a;
	if(b<=10)
	  printf("Right");
	else
	{
		printf("Left");
	}
	if(b>10)
	  b=21-b;
	printf(" %d %d",a,b);
	return (0);
}