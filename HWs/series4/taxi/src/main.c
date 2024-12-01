#include <stdio.h>

int main()
{
	int n,a[100],i,b,c=0,j,k;
	scanf("%d",&n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	for ( i = 0; i < n; i++)
	{
		if (a[i]==4)
			{
			c=c+1;	
			a[i]=0;
			}
		if (a[i]==3)
		{
			for ( j = 0; j < n; j++)
			{
				if(a[j]==1 && j!=i){
					a[i]=0;
					a[j]=0;
					c=c+1;
					break;
				}
			}
		}
		if(a[i]==2)
		{
			for ( j = 0;j < n; j++)
			{
				if (a[j]==2 &&i!=j)
				{
					a[i]=0;
					a[j]=0;
					c=c+1;
					break;
				}
				if(a[j]==1 && j!=i){
					for ( k = j+1; k <n ; k++)
					{
						if (a[k]==1 && k!=i)
						{
							a[j]=0;
							a[k]=0;
							a[i]=0;
							c=c+1;
							break;
						}
						
					}
					
				}
				
			}
			
		}
		
	}
	

	for ( i = 0; i < n; i++)
	{
		if(a[i]!=0)
		   c=c+1;
	}
	printf("%d\n", c); 
	return (0);
}