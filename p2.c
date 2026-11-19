#include<stdio.h>
int main()
{
    int n,i;
    unsigned long long factorial = 1;

    printf("Enter the Number:\n");
    scanf("%d",&n);

    if( n < 0 )
    {
        printf("ERROR : Negative number's factorial does NOT exist..!!");
    }

    else
    {
        for( i = 1; i <= n; i++ )
        {
            factorial *= i;
        }
    }

    printf("Factorial of %d is %llu\n",n,factorial);

    return 0;
}