#include <stdio.h>

int main()
{
	int x,y;
	scanf("%d\n%d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("%d\n%d",x,y);
	return (0);
}