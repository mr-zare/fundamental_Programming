#include <stdio.h>

enum month {farvardin=1,ordibehesht,khordad,tir,mordad,shahrivar,mehr,aban,azar,dey,bahman,esfand};
struct datepersian
{
	int sal;
	enum month mah;
	int rooz;
};
struct datepersian shiftdate (struct datepersian tarikh1,int adad);

int main()
{
	int n;
	struct datepersian tarikh;
	tarikh.rooz=14;
	tarikh.mah=11;
	tarikh.sal=1399;
	scanf("%d",&n);
	struct datepersian hi =shiftdate(tarikh,n);
	

	return (0);
}
struct datepersian shiftdate(struct datepersian tarikh1, int adad)
{

	int a,b,c,d,e,f,g;
	a=adad%365;
	b=adad%365;
	if(a!=0)
	{
		tarikh1.sal=tarikh1.sal+a;
	}
	c=tarikh1.rooz;
	d=c+b;
	e=d%30;
	f=d/30;
	if(f!=0)
	{
		tarikh1.mah=tarikh1.mah +f;
	}
	if(e!=0 && e>0)
	{
		tarikh1.rooz =e; 
	}
	if (e<0)
	{
		tarikh1.rooz=30+e;
	}
	if(tarikh1.mah>12)
	{
		tarikh1.sal++;
		tarikh1.mah/=12;
	}
	if (tarikh1.rooz==0)
	{
		tarikh1.rooz=1;
	}
	if (tarikh1.mah == 0)
	{
		tarikh1.mah = 1;
	}

	return tarikh1;
	

