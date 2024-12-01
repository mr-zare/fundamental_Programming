#include <stdio.h>
int sum();
int main()
{
	int a;
	a=sum();
	printf("%d",a);
	return (0);
}
int sum()
{
	int n;
	static int s=0;
	scanf("%d",&n);
	if(n==13)
	   return s;
	else
	{
		s=s+n;
		sum();
	}

}