#include<stdio.h>
int main()
{
    char a;
    printf("Enter the character ");
    scanf("%c",&a);
    if (a=='q' || a=='w' || a=='e' || a=='r' || a=='t' || a=='y' || a=='u' || a=='i' || a=='o' || a=='p')
    {
        printf("upper line");
    }
    else
    {
        printf("input is not valid");
    }
    return 0;
    
}