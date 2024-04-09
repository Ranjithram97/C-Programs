#include<stdio.h>
int main()
{
    int parents,brothers,sisters,members,x;
    printf("Enter the Parents in your Family:");
    scanf("%d",&parents);
    printf("Enter how many brothers in your Family:");
    scanf("%d",&brothers);
    printf("Enter how many Sisters in your Family:");
    scanf("%d",&sisters);
    members=parents+brothers+sisters;
    printf("The Total Members in your Family is:%d\n",members);
    x=members+1;
    printf("The Total Members in your Family including you is is:%d\n",x);
    return 0;

}
