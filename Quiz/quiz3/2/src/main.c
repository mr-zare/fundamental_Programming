#include <stdio.h>
int avam(int a);
int aval(int b);
int main()
{
	int n,m;
	scanf("%d",&n);
	m=avam(n);
	return (0);
}
int aval(int b)
{
	int i,t=0;
	for ( i = 1; i <=b; i++)
	{
		if(b%i==0)
			t=t+1;
	}
	if(b==1)
	   t=2;
	if(t==2)
	  return b;
	else
	{
		return 0;
	}
}

int avam(int a)
{
	int i,j,m,n,f=0;
	for ( i = 1; i <= a; i++)
	{
		n=aval(a);
		if (n!=0 && f==0)
		{
			printf("%d",a);
			f=1;
		}
		
		if(a%i!=0 && (a/i)<2){
			m=aval(i);
			if(m!=0){
				j=aval(a-m);
				if (j!=0 && f==0 && j!=m)
				{
					printf("%d + %d",m,j);
					f=1;
				}
				
			}
		}
	
	}
}