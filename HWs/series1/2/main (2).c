#include <stdio.h>

int main()

{
	int t;
	scanf("%d",&t);
	if(t<0){
		printf("Ice");
	}
	if(t>=0 && t<=100){
		printf("Water");
	}
	if(t>100)
	   printf("Steam");
	return (0);
}
