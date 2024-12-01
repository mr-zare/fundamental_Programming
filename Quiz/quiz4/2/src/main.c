#include <stdio.h>
void baz(int n);
int bubble(int arr[],int n);
int main()
{
	int a;
	scanf("%d",&a);
	baz(a);


	return (0);
}
void baz(int n)
{
	int i,j,k,a[100],b,m,f=0;
	for ( i = 0; i <= n; i++)
	{
		a[i]=i;
	}
	for ( i = 1,k=2; i <= n; i++,k++)
	{
		
		for ( j = 1; j <=n ; j=j+k)
		{

			for ( b = 0; b < n; b++)
			{
				if((j+1)<=n)
					a[j+1]=0;
				else
				{
					m=j%k;
					a[m]=0;
				}
				
			}
		}
		
	}
	for ( i = 0; i < n; i++)
	{
		if(n%2!=0)
		  {
			 f=1; 
		  }
		else
		{
			n=n/2;
		}
	if(f==0)
	   printf("1");
	}
	
	for ( i = 0; i < n; i++)
	{
		if(a[i]!=0&& f!=0)
		   printf("%d",a[i]);
	}

}