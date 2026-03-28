#include<stdio.h>
void main()
{
	int n=5;
	int series=0;
	printf("series:");
	for(int i=0;i<=n;i++)
	{
		series= series*10+1;
		printf("%d",series);
		
		if(i<n)
		{
			printf(" + ");
		}
	}
}

