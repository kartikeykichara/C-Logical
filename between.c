#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if (a>=1 && a<=10)
    {
        printf("Number is between 1 ---- 10");
    }
    else if (a>=11 && a<=20)
    {
        printf("Number is between 11 -------20");
    }
    else if (a>=34 && a<=89)
    {
        printf("Number is between 34 --------- 89");
    }
    else
    {
        printf("Input is not valid");
    }
    
    
    return 0;
    
}