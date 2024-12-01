#include <stdio.h>
#include<string.h>
int main()
{
	int i,j=0,m=0,six=0,a=0,adad=0,d=0,f=0,t=0;
	char s[15][100],q[9]="mohammad";
	for ( i = 0; i <15; i++)
	{
		scanf("%s",s[i]);
	}
	for ( i = 0; i < 15; i++)
	{
		for ( j = 0; j <8 ; j++)
		{
			if(s[i][j]!=q[j])
				t=1;
		}
		if (strlen(s[i])!=strlen(q))
		{
			t=1;
		}
		
		if(t==0)
		  m++;
		t=0;
	}	
	for (j=0, i = 0; i < 15; i++,j=0)
	{
		while (s[i][j]!='\0')
			{
				j++;
			}
		if (j==6)
		{
			six++;
		}
		j=0;
		if (s[i][0]=='a' || s[i][0]=='A')
		{
			a++;
		}
		for ( j = 0; s[i][j]!='\0'; j++)
		{
			if((int)s[i][j]>=48 && (int)s[i][j]<=57)
			   f=1;
		}
		if(f==1)
		  adad++;
			f=0;
		}
	printf("%d\n",m);
	printf("%d\n",six);
	printf("%d\n",a);
	printf("%d\n",adad);	
	return (0);
}