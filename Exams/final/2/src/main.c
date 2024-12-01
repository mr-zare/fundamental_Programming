#include <stdio.h>

void sort(int *arr,int n);

int main()
{
	//int *array={2,-2,5,3,4}
	// sort(array,5);
	return (0);
}
void sort(int *arr, int n)
{
	int i,j,m,temp;
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j <n-1; j++)
		{
			if((*(arr+j))>(*(arr+j+1)))
			{
				temp=*(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j)=temp;
			}
		}
	}
	for ( i = 0; i < n; i++)
	{
		printf("%d",*(arr+i));
	}
}