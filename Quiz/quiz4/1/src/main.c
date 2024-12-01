#include <stdio.h>
void tab(int ar[],int n);
int main()
{
	int n,i,a[100];
	scanf("%d",&n);
	for ( i = 0; i <n; i++)
	{
		scanf("%d",&a[i]);
	}
	tab(a,n);
	

	return (0);

}
void tab(int ar[],int n)
{
	int i,j,k,m,a,f=0;
	for ( i = 0; i < n; i++)
	{
		for ( j = i+1; j <n ; j++)
		{
			
			m=ar[i]+ar[j];
			for ( k = 0; k <n; k++)
			{
				if(m==ar[k]){
				  printf("%d %d\n",ar[i],ar[j]);
				  f=1;
				}
			}
			
			
		}
		
	}
	if(f==0)
	  printf("NOT EXIST");

}