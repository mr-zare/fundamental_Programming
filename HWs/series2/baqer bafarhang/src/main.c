#include <stdio.h>
int main()
{
	int n,i,l,m=0,delay=0,t=0,a;
	scanf("%d %d",&n,&l);
	int d[n+1],g[n+1],r[n+1];
	d[0]=0;
	g[0]=0;
	r[0]=0;
	for ( i = 1; i <= n;i++)
	{
		scanf("%d %d %d",&d[i],&r[i],&g[i]);
	}
	for ( i = 1; i <= n; i++)
	{
		m=d[i];
		t=t+(d[i]-d[i-1]);
		a=t%(r[i]+g[i]);
		if(a<r[i] )
		  delay=delay+(r[i]-a);
		t=t+delay;
		delay=0;
	}
	a=l-m;
	t=t+a;
	printf("%d",t);
	return (0);
}