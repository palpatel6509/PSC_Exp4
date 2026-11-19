#include<stdio.h>
int main()
{
    int i,n;
    unsigned long long n1 = 0, n2 = 1, nextTerm;

    printf("Enter the number of Terms:\n");
    scanf("%d",&n);

    printf("Fibonacci series:\n");

    for( i = 1; i <= n; i++ )
    {
        printf("%llu ",n1);
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }

    printf("\n");

    return 0;
}