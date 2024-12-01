#include <stdio.h>
int tab(int a, int b);
int main()
{
	int n,m;
	scanf("%d",&n);
	m=n/2;
	tab(m,n);

	return (0);
}
int tab(int a,int b)
{
	int i,j,m,n=1;
	if(a==-1)
	   return 0;
	for ( i = 0; i <=b ; i++)
	{
		for ( j = 0; j <=b ; j++)
		{
			m=a*2+i*5+j*10;
			if (m==b)
			{
				printf("%d %d %d\n",a,i,j);
			}
			
		}
		
	}
	return n*tab(a-1,b);


}
