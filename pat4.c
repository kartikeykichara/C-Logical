#include<stdio.h>
int main()
{
    for (int  i = 1; i <=5; i++)
    {
        for (int s = 4; s >=i; s--)
        {
            printf(" ");
        }
        
        for (int  j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int  i = 1; i <=5; i++)
    {
        for (int s = 2; s <=i; s++)
        {
            printf(" ");
        }
        
        for (int  j = 5; j >=i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}