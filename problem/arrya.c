#include<stdio.h>

#define N 5

int main()
{
    int a[N], i;

    printf("Enter %d interge number \n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elemente of array are : \n");
    for (int i = N-1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
}