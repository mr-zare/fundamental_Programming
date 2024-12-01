#include <stdio.h>
#include <string.h>
int main()
{
	int i,j,n1,t[100]={0},k,f=0,shomar=1;
	char n[20][100], a[100],man[20];
	scanf("%d %s",&n1,a);
	man[0]=a[0];
	for ( i = 0; i < strlen(a); i++)
	{
		for ( j = 0; j < strlen(man); j++)
		{
			if(a[i]==man[j])
			{
				f=1;
			}
		}
		if (f==0)
		{
			man[shomar]=a[i];
			shomar++;
		}
		f=0;
	}
	f=1;
	for ( i = 0; i < n1; i++)
	{
		scanf("%s",&n[i]);
	}
	for ( i = 0; i <n1 ; i++)
	{
		for ( j = 0; j <shomar ; j++)
		{
			for ( k = 0; k <strlen(n[i]); k++)
			{
				if (man[j]==n[i][k])
				{
					f=0;
					t[i]++;
					break;
				}	
			}
			if(f==1)
			{
			   t[i]=-10;
			}
			f=0;	   
		}		
		if (t[i]==shomar)
			{
			printf("Yes\n");
			}
		
		else
		{
			printf("No\n");
		}
	}
	//printf("%d\n%d\n",strlen(man),shomar);
//	for ( i = 0; i <n1; i++)
	{
//		printf("%d\n",t[i]);
	}
//	for ( i = 0; i < shomar; i++)
{
//		printf("%c\n",man[i]);
}
	return (0);
}
