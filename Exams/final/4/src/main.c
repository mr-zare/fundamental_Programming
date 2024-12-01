#include <stdio.h>
#include <math.h>
#include <string.h>
void chap(char a[],int m);
void jam(char b[],int n);
int main()
{
	char adad[100];
	scanf("%s",adad);
	int b=strlen(adad);
	jam(adad,b);
	

	return (0);
}
void chap(char a[],int m)
{
	int i=0,j;
	while (a[i]==0)
	{
		i++;
	}
	for ( j = i; j < m; j++)
	{
		printf("%c",a[j]);
	}
	
	
}
void jam(char b[],int n)
{
	int f=0,i,t=0,j=0,a,c,d=0;
	char arr[100],ara[100]; 
	for (i = 0; i < n; i++)
	{
		if (((int)b[i] >= 48 && (int)b[i] <= 57) || ((int)b[i] >= 65 && (int)b[i] <= 70))
		{
			t++;
		}
	}
	if(t==n)
	   f=1;
	for ( i = n-1; i>=0 ; i++)
	{
		if(b[i]=='A')
		{
			j+=pow(16,i)*10;
		}
		if (b[i] =='B')
		{
			j += pow(16, i) * 11;
		}
		if (b[i] =='C')
		{
			j += pow(16, i) * 12;
		}
		if (b[i] =='D')
		{
			j += pow(16, i) * 13;
		}
		if (b[i] =='E')
		{
			j += pow(16, i) * 14;
		}
		if (b[i] =='F')
		{
			j += pow(16, i) * 15;
		}
		if (b[i] =='0')
		{
			j += pow(16, i) * 0;
		}
		if (b[i] =='1')
		{
			j += pow(16, i) * 1;
		}
		if (b[i] =='2')
		{
			j += pow(16, i) * 2;
		}
		if (b[i] =='3')
		{
			j += pow(16, i) * 3;
		}
		if (b[i] =='4')
		{
			j += pow(16, i) * 4;
		}
		if (b[i] =='5')
		{
			j += pow(16, i) * 5;
		}
		if (b[i] =='6')
		{
			j += pow(16, i) * 6;
		}
		if (b[i] =='7')
		{
			j += pow(16, i) * 7;
		}
		if (b[i] =='8')
		{
			j += pow(16, i) * 8;
		}
		if (b[i] =='9')
		{
			j += pow(16, i) * 9;
		}
	}
	j=j+(2+0+16*16+pow(16,3)*10);
	i=0;
	while (j!=0)
	{
		a=j%16;
		if (a==1)
		{
			arr[i]='1';
		}
		if (a ==0)
		{
			arr[i] ='0';
		}
		if (a ==2)
		{
			arr[i] ='2';
		}
		if (a ==3)
		{
			arr[i] ='3';
		}
		if (a ==4)
		{
			arr[i] ='4';
		}
		if (a ==5)
		{
			arr[i] ='5';
		}
		if (a ==6)
		{
			arr[i] ='6';
		}
		if (a ==7)
		{
			arr[i] ='7';
		}
		if (a ==8)
		{
			arr[i] ='8';
		}
		if (a ==9)
		{
			arr[i] ='9';
		}
		if (a ==10)
		{
			arr[i] ='A';
		}
		if (a ==11)
		{
			arr[i] ='B';
		}
		if (a ==12)
		{
			arr[i] ='C';
		}
		if (a == 13)
		{
			arr[i] = 'D';
		}
		if (a == 14)
		{
			arr[i] = 'E';
		}
		if (a == 15)
		{
			arr[i] = 'F';
		}
		j=j/16;
	}
	for (d=0, i = strlen(arr); i >= 0; i++,d++)
	{
		ara[d]=arr[i];
	}
	chap(ara,strlen(ara));
}