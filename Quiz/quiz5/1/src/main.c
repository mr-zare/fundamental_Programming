#include <stdio.h>
void mat(int n,int a[100][100]);
int main()
{
	int a[100][100],i,j,n;
	scanf("%d",&n);
	for ( i = 0; i <n; i++)
	{
		for ( j = 0; j < n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	mat(n,a);
	return (0);
}
void mat(int n, int a[100][100])
{
	int b,i,j,sa[100]={0},so[100]={0},qa=0,qf=0,f=0;
	
	for ( i = 0; i <n; i++)
	{
		for ( j = 0; j <n; j++)
		{
			sa[i]+=a[i][j];
			so[j]+=a[i][j];
			if(i==j)
			{
				qa+=a[i][j];
			}
			if ((i+j)==n-1)
			{
				qf+=a[i][j];
			}
		}
	}
	for ( i = 0; i < n-1; i++)
	{
		if(sa[i]!=sa[i+1])
		   f=1;
		if(so[i]!=so[i+1])
		  f=1;
		if (qa!=qf)
		  f=1;		
	}
	if(sa[0]!=so[0] || sa[0]!=qa || so[0]!=qa)
	   f=1;
	
	if(f==0)
	{
		printf("%d\n Special matrix",qa);
	}
	else
	{
		printf("Fail");
	}
	
	



}