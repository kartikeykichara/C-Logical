#include<stdio.h>
int main()
{
    char a;
    printf("Enter any one character:");
    scanf("%c",&a);
    if (a=='e')
    {
        int b;
        printf("enter number");
        scanf("%d",&b);
        if (b%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
    }
    else if (a=='v')
    {
        int age;
        printf("Enter your age:");
        scanf("%d",&age);
        if (age>=18)
        {
            printf("Valid");
        }
        else
        {
            printf("Not Valid");
        }
    }
    else if (a=='s')
    {
        int d;
        printf("enter number:");
        scanf("%d",&d);
        if (d==1)
        {
            printf("Winter");
        }
        else if (d==2)
        {
            printf("Summer");
        }
        else if (d==3)
       {
            printf("Autumn");
       }
        else if (d==4)
        {
            printf("Rainy");
        }
        else
        {
            printf("Input is not valid");
        }
       
        
    }
    else if (a=='m')
    {
        int sciece,eco,maths;
        printf("Enter the marks");
        scanf("%d %d %d",&sciece,&maths,&eco);
        float average,percent;
        average=sciece+maths+eco/3;
        percent=(average/300.0)*100;
        printf("percent %.2f",percent);
        if (percent>=80)
        {
            printf("A grade");
        }
        else if (percent>=50 && percent<80)
        {
            printf("B grade");
        }
        else if (percent>=36 && percent<50)
        {
            printf("C grade");
        }
        
    }
    else if (a=='k')
    {
        char a;
        printf("enter any one character");
        scanf("%c",&a);
        if (a=='q' || a=='w' || a=='e' || a=='r' || a=='t' || a=='y' || a=='u' || a=='i' || a=='o')
        {
            printf("Upper line");
        }
        else if (a=='a' || a=='s' || a=='d' || a=='f' || a=='g' || a=='h' || a=='j' || a=='k')
        {
            printf("Middle line");
        }
        else if (a=='z' || a=='x' || a=='c' || a=='v' || a=='b' || a=='n')
        {
            printf("Lower line");
        }
        else
        {
            printf("input is not valid");
        }       
    }
    else if (a=='c')
    {
        char t;
        printf("Enter any charcter :");
        scanf("%c",&t);
        if (t=='a' || t=='i' || t=='o' || t=='e' || t=='u')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else
    {
        printf("Input is not valid");
    }
    return 0;
}