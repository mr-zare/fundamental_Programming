#include <stdio.h>

int main()
{
	int n,k,i=1,f=0,a,b;
	scanf("%d %d",&n,&k);
	while(f==0){
		b=(k*i)%n;
		
		if(b==0){
			a=(k*i)/n;
			f=1;
		}
		i++;
		}
	i=i-1;
	printf("%d",i);


	return (0);
}