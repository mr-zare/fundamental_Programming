#include <stdio.h>
#include <math.h>
void ta(int n,int a);
int main()
{
	int i,j,k,a,n,m,t,q,b;
	scanf("%d",&n);
	b=2*n+1;
	a=2*(pow(n,2))+2*n+1;
	k=(n-1)/2;
	
	for ( i = 1; i <=n; i++)
	{
		while (m!=a)
		{
			printf("-");
			m++;
		}
		m=0;
		printf("\n");
		for(t=1;t<=n;t=t+2){
			for ( j = 1; j <=n ; j=j+1)
			{
				printf("|");
				ta(n,t);
				
			}
			printf("|");
			printf("\n");
		}
		for(t=n-2;t>=1;t=t-2){	
			for ( q = 0; q < n; q++)
			{
				printf("|");
				ta(n,t);
			}
			printf("|");
			printf("\n");
		}
		
		//for(t=n-2;t>=n;t=t-2){
		//	printf("\n");
		///	printf(" |");
			//ta(n,t);		
			
		//}
		while (m != a)
		{
			printf("-");
			m++;
		}
	}
	
	return (0);
}

void ta(int n,int a)
{
	int b,i,j,k;
	b=n-a;
	for ( i = 0; i < b; i++)
	{
		printf(" ");
	}
	for ( j= 0; j < a; j++)
	{
		printf(" #");
	}
	//printf(" ");
	for ( k = 0; k <b; k++)
	{
		printf(" ");
	}
	printf(" ");
}
