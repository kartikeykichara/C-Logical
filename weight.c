#include<stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if (age>=18)
    {
        int weight;
        printf("enter your weight");
        scanf("%d",&weight);
        if (weight>=50)
        {
            printf("Valid");
        }
        else
        {
            printf("Enter your weight greater than 50");
        }
        
    }
    else
        {
            printf("Enter your age greater than 18");
        }
    return 0;
}