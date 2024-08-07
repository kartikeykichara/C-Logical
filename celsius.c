#include<stdio.h>
int main()
{
    char a;
    printf("Enter any character:");
    scanf("%c",&a);
    if (a=='f')
    {
        float f ,c;
        printf("Enter the temperature in celsius :");
        scanf("%f",&c);
        f=(1.8*c)+32;
        printf(" F: %.2f",f);
    }
    else if (a=='c')
    {
        float f,c;
        printf("Enter the temperature in fehrenhite:");
        scanf("%f",&c);
        c=(f-32)*5/9;
        printf("Temperature in celsius: %.2f",c);
    }
    
   
    return 0;
}