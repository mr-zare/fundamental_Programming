#include <stdio.h>

int main()
{
	int arr[100],aray[100],i,j,n;
	int *a=arr,*b=aray;
	scanf("%d",&n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	j=n-1;
	for ( i =0; i <n; i++,j--)
	{
		b[i]=a[j];
	}
	for ( i = 0; i < n; i++)
	{
		printf("%d ",i[b]);
	}
	
	
	

	return (0);
}