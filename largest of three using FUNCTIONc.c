#include<stdio.h>
#define fun main
int num( int a,int b)
{
    if(a>b)
        return a;
    return b;
}
int fun()
{
    int a,b,c;
    printf("Enter A number:");
    scanf("%d",&a);
    printf("Enter B number:");
    scanf("%d",&b);
    printf("Enter C number:");
    scanf("%d",&c);
    printf("Largest of three Numbers is %d",num(num(a,b),c));
}
