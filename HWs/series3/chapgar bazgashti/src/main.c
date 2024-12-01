#include <stdio.h>
int chap(int i,int j);
int main()
{
	int n,m=1;
	scanf("%d",&n);
	m=chap(n,m);
	return (0);
}
int chap(int i,int j)
{
	int b=1;
	if(i<j)
	   return 0 ;
	else
	{
	 printf("%d ",j);
	 return b*chap(i,j+1);
	}
	
	
	  
}