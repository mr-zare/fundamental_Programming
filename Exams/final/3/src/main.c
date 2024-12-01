#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100],s2[10],s3[10],temp[100],s4[100];
	scanf("%s\n",s1);
	scanf("%s\n",s2);
	scanf("%s",s3);
	int m,i,j,t=0;
	for ( i = 0; i < strlen(s1); i++)
	{
		t=0;
		for ( j = 0; j < strlen(s2); j++)
		{
			if(s1[i+j]==s2[j])
			{
				t++;
			}
		}
		if(t==strlen(s2))
		{
			m=i;
			break;
		}
	}
	for ( i = 0; i < m; i++)
	{
		temp[i]=s1[i];
	}
	printf("%s\n",temp);
	j=(i-1)+(strlen(s3))+2;
	strcat(temp,s3);
	printf("%s\n",temp);
	for ( i = m+(strlen(s2)); i <strlen(s1) ; i++,j++)
	{
		temp[j]=s1[i];
	}
	printf("%s",temp);
	
	return (0);
}