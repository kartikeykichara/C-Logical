#include<stdio.h>
int main()
{
    int physics,Chemistry,Computerapplication,total; 
    printf("Roll no - 784\n");
    printf("Name - Kartikey\n");
    printf("Fname - Suresh Chandra Kichara");
    printf("Address - Bhilwara");
    printf("Contact - 9079067315");
    printf("Enter the marks : ");
    scanf("%d %d %d",&physics,&Chemistry,&Computerapplication);
    total=physics+Chemistry+Computerapplication;
    printf("total %d",total);
    float percen;
    percen=(total/300.0)*100;
    printf("percen %d",percen);
    if (percen>=60)
    {
        printf(" I Division  ");
    }
    else if (percen>=45 && percen<60)
    {
        printf(" II division ");
    }
    else if (percen>36 && percen<45)
    {
        printf(" III division");
    }
    else
    {
        printf("Fail");
    }
    
    return 0;
}