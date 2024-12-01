#include <stdio.h>
int abc(int a[],int n1,int b[],int n2);
int main()
{
	int n1,n2,c,i;
	scanf("%d %d\n",&n1,&n2);
	int a[n1],b[n2];
	for (i = 0; i < n1; i++)
	{
		scanf("%d",&a[i]);
	}
	for ( i = 0; i < n2; i++)
	{
		scanf("%d",&b[i]);
	}
	c=abc(a,n1,b,n2);
	return (0);
}
int abc(int a[], int n1, int b[], int n2)
{
	int i,j,f=0;
	for ( i = 0; i <=n1-n2 ; i++)
	{
		f=0;
		for ( j = 0; i < n2; j++)
		{
			if(a[j+i]!=b[j])
			   f=1;
		}
		if(f==0)
		{
			printf("%d %d",i,i+n2);
			return i;
		}
	}
	if(f==1) 
	   printf("no");
}
