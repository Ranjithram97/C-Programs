#include<stdio.h>
int main()
{
    int month;
    float price,x;
    printf("Enter the amount of dress:");
    scanf("%f",&price);
    printf("Enter the month that you purchasing the dress:");
    scanf("%d",&month);
    switch(month)
    {
    case 1:
        printf("January");
        x=price-(price*20/100);
        break;

    case 3:
        printf("March");
        x=price-(price*10/100);
        break;

    case 4:
        printf("April");
        x=price-(price*10/100);
        break;

    case 6:
        printf("June");
        x=price-(price*75/100);
        break;

    case 7:
        printf("July");
        x=price-(price*75/100);
        break;

    case 10:
        printf("October");
        x=price-(price*30/100);
        break;

    case 11:
        printf("November");
        x=price-(price*30/100);
        break;

    case 12:
        printf("December");
        x=price-(price*25/100);
        break;

    default:
        printf("\nThere is No Discount!!!");
        printf("\n Chris Father needs to pay RS %.2f",price);
    }
    if(x!=0)
    {
    printf("\n Chris Father needs to pay RS %.2f",x);
    }
    return 0;
}
