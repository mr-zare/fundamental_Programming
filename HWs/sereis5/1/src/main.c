#include <stdio.h>
#include <string.h>
int main()
{
	char s[100],string[100][100],s1[100][100],s2[100],temp[100][100];
	int i=0,j=0,k=0,n,Q,tv[100]={0},f=0,th[100]={0},m,p=0,t=0;
	scanf("%d",&n);
/*	for ( i = 0; i < n; i++)
	{
		for ( j =p; s[j]!=' ' && s[j]!=NULL; j++)
		{
			string[i][k]=s[j];
			k++;
		}
		p=j+1;
		k=0;
	}*/
	for ( i = 0; i < n; i++)
	{
		scanf("%s",&string[i]);
	}
//	for ( i = 0; i < n; i++)
//	{
	//	printf("%s",string[i]);
//	}
	
	
	i=0;
	j=0;
	scanf("%d",&Q);
	for ( i = 0; i<=Q; i++)
	{
		fgets(s1[i],100,stdin);
	}
	for ( i = 0; i <= Q; i++)
	{
		if(s1[i][0]=='1')
		{
			for ( j = 0; j < n; j++)
			{
				printf("%s  ",string[j]);
			}
		printf("\n");
		}
		if (s1[i][2]=='L')
		{
			for ( j = 0; i < n-1; j++)
			{	
				for ( t = 0; t< n; t++)
				{
					while ((int)string[j][t]==(int)string[j+1][t])
					{
						t++;
					}
					if((int)string[j][t]>(int)string[j+1][t])
					   {
							for ( m = 0; m < strlen(string[j]); m++)
						    {
							   temp[j][m]=string[j][m];
						   }
						   for ( m = 0; m < strlen(string[i+1]); m++)
						   {
							   string[j][m]=string[j+1][m];
						   }
						   for ( m = 0; m < strlen(temp[j]); m++)
						   {
							   string[j+1][m]=temp[j][m];
						   }
						   break;
					   }
				}				
			}
		}
		if (s1[i][2]=='V')
		{
			for ( j = 0; j < n; j++)
			{
				for ( k = 0; k <strlen(string[j]); k++)
				{
					if (string[j][k] == 'a' || string[j][k] == 'e' || string[j][k] == 'i' || string[j][k] == 'o' || string[j][k] == 'u')
					{
						tv[j]++;
					}
				}	
			}
			for ( j = 0; j < n; j++)
			{
				for ( k = 0; k< n-1; k++)
				{
					if (tv[k]<tv[k+1])
					{
						for ( m = 0; m < strlen(string[k]) ; m++)
						{
							temp[k][m]=string[k][m];
						}
						for (m = 0; m < strlen(string[k+1]); m++)
						{
							string[k][m] = string[k+1][m];
						}
						for (m = 0; m < strlen(temp[k]); m++)
						{
							string[k+1][m] =temp[k][m];
						}
					}
				}
			}
		}
		if (s1[i][2] == 'D')
		{
			for ( j = 0; j < n; j++)
			{
				for (k = 0; k <strlen(string[j]) ; k++)
				{	
					for (t = 0; t<k ; t++)
					{
						if (string[j][t]==string[j][k])
						{
							f=1;
							break;
						}
					}
					if(f==0)
					{
					  th[j]++;
					}
					f=0;			
				}
			}
			for ( j = 0; j < n; j++)
			{
				for ( k = 0; k < n-1; k++)
				{
					if(th[k]>th[k+1])
					{
						for ( m = 0; m < strlen(string[k]); m++)
						{
							temp[k][m]=string[k][m];
						}
						for (m = 0; m < strlen(string[k+1]); m++)
						{
							string[k][m] = string[k+1][m];
						}
						for (m = 0; m < strlen(temp[k]); m++)
						{
							string[k+1][m] =temp[k][m];
						}
					}
				}	
			}
		}
	}
//	for ( i = 0; i < n; i++)
//	{
	//	printf("%d ",th[i]);
	//}
	//for ( i = 0; i < n; i++)
	///{
///		printf("%d ",tv[i]);
//	}
	
	
	return (0);
}
