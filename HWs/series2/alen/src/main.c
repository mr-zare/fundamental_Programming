#include <stdio.h>

int main()
{
	int a,c,t=0,b,n,i=0,j,z=1;
	scanf("%d %d",&a,&b);
	scanf("\n%d",&n);
	while(n!=0)
	{
		c=n%10;
		i=i+1;
		t=t+z*c;
		n=n/10;
		z=z*a;
			}
		
	int m[i];	
	j=0;
	i=0;
	while(t!=0){
		m[i]=t%b;
		i=i+1;
		t=t/b;
	}
	i=i-1;
	while( i!=-1){
		printf("%d",m[i]);
		i=i-1;
	}
	
	return (0);
}