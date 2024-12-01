#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,i,f;
	
	a = 97 + (rand() % 26);
	srand(a);
	
	b = 97 + (rand() % 26);
	srand(b);
	 while (a == b)
{
		b = 97 + (rand() % 26);
		srand(b);
}
	c = 97 + (rand() % 26);
	srand(c);
	while (a==c || b==c)
		{
		c = 97 + (rand() % 26);
		srand(c);
		}

	d = 97 + (rand() % 26);
	srand(d);
	while(a==d ||b==d ||c==d)
		{
		d = 97 + (rand() % 26);
		srand(d);
		}
	printf("%c %c %c %c",a,b,c,d);

	return (0);
}