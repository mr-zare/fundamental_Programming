#include <stdio.h>

int main()
{
	int n, a[100], i, b1=0,b2=0,d,b3=0,b4=0,c=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for ( i = 0; i < n; i++)
	{
		if(a[i]==1)
			b1++;
		if (a[i] == 2)
			b2++;
	
		if (a[i] == 3)
			b3++;
		if (a[i] ==4 )
			b4++;
	}
	c=c+b4;
	d=b1-b3;
	if (b1>b3 && b3!=0)
	{
		c=c+d;
		b1=b1-b3;
	}
	if(b1<=b3)
	{
		c=c+b3;
		b1=0;
	}
	
	d = b1 / 4;
	c = c + d;
	b1 %= 4;
	d = b2 / 2;
	c+=d;
	b2%=2;
	if (b1<=2 && b1!=0)
	{
		c=c+1;
		b2=0;
	}
	if(b1>2 && b2==1)
	 { c=c+2;
	   b2=0;
	 }
	if(b2==1)
	  c++;

	printf("%d",c);


	
	return (0);
}