#include<stdio.h>
int main()
{
    int a;
    int blanks = 0;
    int tabs = 0;
    int newlines = 0;

    printf("Enter your Text(Press ctrl+Z to finish):\n");

    while(( a = getchar()) != EOF )
    {
        if( a == ' ' )
        {
            blanks++;
        }

        else if( a == '\t' )
        {
            tabs++;
        }

        else if( a == '\n' )
        {
            newlines++;
        }
    }

    printf("Total Blanks : %d\n",blanks);
    printf("Total Tabs : %d\n",tabs);
    printf("Total Newlines : %d\n",newlines);
    
    return 0;
}