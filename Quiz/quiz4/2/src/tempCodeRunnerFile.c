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
	int i,j,k,a[100];
	for ( i = 0; i <= n; i++)
	{
		a[i]=i;
	}
	for ( i = 1,k=2; i <= n; i++,k++)
	{
		for ( j = 2; j <=n ; j=j+k)
		{
	     	a[j]=0;
		}
		
	}
	for ( i = 0; i < n; i++)
	{
		if(a[i]!=0)
		   printf("%d",a[i]);
	}
	
	



}