#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if (a==1 || a==2 || a==12)
    {
        printf("Winter");
    }
    else if (a==3 || a==4 || a==5)
    { 
        printf("Summer");
    }
    else if (a==6 || a==7 || a==8 || a==9)
    {
        printf("Rainy ");
    }
    else if (a==10 || a==11)
    {
        printf("Autumn");
    }
    else
    {
        printf("Input is not valid");
    }
    return 0;
}