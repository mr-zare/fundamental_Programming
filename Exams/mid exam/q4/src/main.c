#include <stdio.h>

int main()
{
	int n,a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,b;
	scanf("%d",&n);
	while(n!=0)

	{
		b=n%10;
		n=n/10;
		switch (b)
		{
		case 0:
		    a0++;
			break;
		case 1:
		    a1++;
			break;
		case 2:
		    a2++;
			break;
		
		case 3:
		    a3++;
			break;
		case 4:
		    a4++;
			break;
		case 5:
		    a5++;
			break;
		case 6:
		    a6++;
			break;
		case 7:
		    a7++;
			break;
		case 8:
		    a8++;
			break;
		case 9:
		    a9++;
			break;
		}
	}
	if (a0 !=0)
			{
		printf("0:%d\n",a0);

		}
	if (a1 !=0)
		{
		printf("1:%d\n",a1);
			
		}
		
	if (a2 !=0)
		{
		printf("2:%d\n",a2);
			
		}
	if (a3 !=0)
		{
		printf("0:%d\n",a3);
			
		}
	if (a4 !=0)
		{
		printf("4:%d\n",a4);
			
		}
	if (a5 !=0)
		{
		printf("5:%d\n",a5);
			
		}
	if (a6 !=0)
		{
		printf("6:%d\n",a6);
			
		}
	if (a7 !=0)
		{
		printf("7:%d\n",a7);
			
		}
	if (a8 !=0)
		{
		printf("8:%d\n",a8);
			
		}
	if (a9 !=0)
		{
		printf("9:%d\n",a9);
			
		}
		



	

	return (0);
}