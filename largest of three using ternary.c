#define fun main
int fun()
{
    int a,b,c;
    printf("Enter A number:");
    scanf("%d",&a);
    printf("Enter B number:");
    scanf("%d",&b);
    printf("Enter C number:");
    scanf("%d",&c);
    printf("Largest of three Numbers is %d",a>b?(a>c?a:c):(b>c?b:c));
}

