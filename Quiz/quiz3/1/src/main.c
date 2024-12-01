#include <stdio.h>
int fis(int a);
int main()
{
	int n,m;
	scanf("%d",&n);
	m=fis(n);
	return (0);
}
int fis(int a)
{
	int i,j,k,b,f=0;
	for ( i = 1; i <a; i++)
	{
		for ( j =1; j <=i; j++)
		{   if (f==0)
		{
			for ( k =1; k <=j; k++)
			{
				if((i+j+k)==a){
					b=j*j+k*k;
					if (b==(i*i))
					{
						printf("%d %d %d",k,j,i);
						f=1;
					}
					
					
				}
			}
		}	
		}
		
	}
	if (f==0)
	{
		printf("impossible");
	}
	



}
