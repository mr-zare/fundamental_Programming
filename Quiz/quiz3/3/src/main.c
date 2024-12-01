#include <stdio.h>
int tavan(int x, int y); 
int main()
{
	int n,i,j=0,a,k=1,m;
	scanf("%d",&n);
	i=n;
	for ( m = 100; m < n; m++)
	{
		k=1;
		while(k<100){
			while(i!=0){
				a=i%10;
				i=i/10;
				j=j+(tavan(a,k));
	}
			if(j==n){
				printf("%d , k=%d",m,k);
		}
			k=k+1;
	}
	}

	return (0);

}


int tavan(int x, int y)
{
	if (y == 0)
		return 1;
	else
	{
		return x * tavan(x, y - 1);
	}
}