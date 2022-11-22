#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("The swaped values are:%d %d",a,b);
    return 0;
    
}