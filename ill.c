

#include<stdio.h>
int main()
{
    int a;
    float amount;
    printf("Name-kartikey:\n");
    printf("enter the unit:\n");
    scanf("%d",&a);
    amount=10*a;
    if (a>=1 && a<=10)
    {
        float total_amount;
        total_amount=amount*0.90;
        printf("Total payment: %.2f",total_amount);
    }
    else if (a>=11 && a<=20)
    {
        float total_amount;
        total_amount=amount*0.85;
        printf("Total bill : %.2f",total_amount);  
    }
    else if (a>=21 && a<=40)
    {
        float total_amount;
        total_amount=amount*0.70;
        printf("Total amount : %.2f",total_amount);
    }
    else if (a>=50)
    {
        float total_amount;
        total_amount=0.50*amount;
        printf("Total amount : %.2f",total_amount);
    }
    
    
    return 0;
    

}