#include <stdio.h>
void hanoi(int n, char A, char C, char B);
int main()
{
	int n;
	scanf("%d", &n);
	hanoi(n, 'A', 'C', 'B');

	return (0);
}
void hanoi(int n, char A, char C, char B)
{
	if (n == 1)
	{
		printf("%C -> %C \n%C -> %C\n", A, B, B, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		printf("%c -> %c \n", A, B);
		hanoi(n - 1, C, A, B);
		printf("%c -> %c\n", B, C);
		hanoi(n - 1, A, C, B);
	}
}