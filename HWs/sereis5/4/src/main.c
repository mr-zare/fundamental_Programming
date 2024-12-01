#include <stdio.h>

struct adad
{
	int sa;
	int mo;
};
struct khoroji
{
	int k1;
	int k2;

};

int main()
{
	struct adad m[100];
	struct khoroji a1[100];
	
	int n,n1,i,b,a,v1,v2,v3,v4,t,t1;
	char c;
	scanf("%d %d",&n,&n1);
	
	for ( i = 1; i <= n; i++)
	{
		scanf("%d %d",&m[i].sa,&m[i].mo);
	}
	for ( i = 0; i < n1; i++)
	{
		scanf("%d %c %d",&a,&c,&b);
		v1 =m[a].sa;
		v2 =m[b].sa;
		v3 = m[a].mo;
		v4 = m[b].mo; 
		if (c == '+')
		{
			a1[i].k1=v1 + v2;
			a1[i].k2=v3 +v4;
		}

		if (c== '-')
		{
			a1[i].k1 =v1 - v2;
			a1[i].k2 =v3 - v4;
		}
		else if (c== '*')
		{
			t=(v1*v2)-(v3*v4);
			a1[i].k1 =t;
			t1=(v3*v2)+(v1*v4);
			a1[i].k2 =t1;
		}
	}
	for ( i = 0; i < n1; i++)
	{
		printf("%d %d\n",a1[i].k1,a1[i].k2);
	}
	return (0);
}