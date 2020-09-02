#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int n ;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= 2 * (n - (i+1)); k++)
        {
            printf(" ");
        }
        printf("\b");
        for (int j = i; j >= 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n-2; i >= 0 ; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= 2 * (n - (i + 1)); k++)
        {
            printf(" ");
        }
        printf("\b");
        for (int j = i; j >= 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}