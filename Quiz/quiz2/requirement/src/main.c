#include <stdio.h>
int tavan(int x,int y);
int fact(int i);
int main()
{
	int x,a,n,k,s=0,m,b,c;
	scanf("%d %d %d",&x,&a,&n);
	for ( k = 0; k <= n; k++)
	{
		b=fact(n)/(fact(k)*fact(n-k));
		c=tavan(x,k);
		m=tavan(a,n-k);
		s=s+(b*c*m);
	}
	printf("%d",s);
	



	return (0);
}
//*tabe tavan*//
int tavan(int x,int y)
{
	if (y == 0)
		return 1;
	else
	{
		return x * tavan(x, y - 1);
	}
}
/*tabe factoriel*/
int fact(int i)
{
	if(i==0)
	  return 1;
	else
	{
		return i*fact(i-1);
	}	
}