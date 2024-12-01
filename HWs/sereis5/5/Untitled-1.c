#include <stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0,k=0,n,t=0,m[100]={0},q[100],q1=0;
	char a[300],b[100][30];
	fgets(a,300,stdin);
	while (a[k])
	{
		while (a[k]!=' ')
		{
			b[j][i]=a[k];
			i++;
            k++;
			m[j]++;
		}
		j++;
		k++;
        i=0;
	}
	n=j;
	j=0;
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < m[i]; j++)
		{
			if ((int)b[i][j] > 96 && (int)b[i][j] < 123 && b[i][j] != 'a' && b[i][j] != 'e' && b[i][j] != 'i' && b[i][j] != 'o' && b[i][j] != 'u' && b[i][j] != 'y')
			{
				t++;
			}
			else
			{
				t=0;
			}			
		}
		if (t>=5)
		{
			q[q1]=i;
			q1++;
		}
	}
	for ( i = 0; i < q1; i++)
	{
		for ( j = 0; j <=(strlen(b[i]))+1 ; j++)
		{
			t=q[i];
			if ((int)b[t][j]>64 && (int)b[t][j] <123)
			{
				printf("%c",b[t][j]);
			}
		}
		printf(" ");
		
	}
	return (0);
}