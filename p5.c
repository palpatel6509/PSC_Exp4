#include<stdio.h>
int main()
{
    int n,i,a = 1;

    printf("Enter the Number:");
    scanf("%d",&n);

    if ( n <= 1 )
    {
        a = 0;
    }

    else
    {
        for( i = 2; i <= n/2; i++ )
        {
            a = 0;
            break;
        }
    }

    if ( a == 1 )
    {
        printf("%d is a Prime Number.\n",n);
    }

    else
    {
        printf("%d is NOT a Prime Number.\n",n);
    }
    
    return 0;
}