#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n , j;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for ( j = 0; j <= i; j++)
		{
			printf("*"); 
		}
		for ( int k = 0; k <= 2*n - 1 ; k++)
		{
			printf(" ");
		}
		
		for ( j = i ; j >= 1 ; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;

}