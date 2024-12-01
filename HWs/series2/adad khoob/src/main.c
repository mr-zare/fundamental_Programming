#include <stdio.h>

int main()
{
	int k,i,s=0,j;
	scanf("%d",&k);
	for ( i =k; i >=k; i++)
	{
		s=0;
		j=1;
		while(s<i)
		{
			s=s+j;
			j++;
		}
		if(s==i){
			printf("%d",i);
			break;
		}
		
	}
	

	return (0);
}