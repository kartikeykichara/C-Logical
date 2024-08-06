#include<stdio.h>
int main()
{
    int a;
    printf("Enter any character:");
    scanf("%d",&a);
    if (a%2==0 && a%3==0)
    {
        printf("Divisible by 2 and 3 numbers");
    }
   else if (a%6==0 || a%9==0)
   {
        printf("Divisible  by 6 or 9 anyone");
   }
   else if (a%4==0 && a%5==0)
   {
        printf("Divisible by 4 and 5");
   }
   else if (a%3==0 || a%8==0)
   {
        printf("Divisible 3 or 8 anyone");
   }
   else
   {
        printf("input is not valid");
   }
   
   return 0;
    
}