#include <stdio.h>
void star(int i, int n); 
void star_one_line(int i);
int main()
{
	int n,k,m,a;
	scanf("%d %d",&k,&n);
	star(k,n);
	

	return (0);

}
void star_one_line(int i)
{
	if (i == 0)
	{
		return;
	}
	else
	{
		printf("*");
		star_one_line(i - 1);
	}
}
void star(int i, int n)
{
	int j;
	for ( j = i; j <= n; j++)
	{
		star_one_line(j);
		printf("\n");
	}
}
	