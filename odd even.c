#include<stdio.h>
int main()
{
    double num;
    printf("Enter an Integer:");
    scanf("%lf",&num);
    int y=(int)num;
    int x= y%2;
    if(x==0)
    {
        printf("It is Even Number");
    }
    else
    {
        printf("It is Odd Number");
    }
    return 0;
}
