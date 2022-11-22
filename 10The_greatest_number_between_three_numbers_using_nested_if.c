#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    printf("Enter the value of C: ");
    scanf("%d",&c);
    	if(a > b)
    {
        if(a > c)
            printf("a: %d is largest\n", a);
        else
            printf("b: %d is largest\n", b);
    }
    else if(b > c)
        printf("b: %d is largest\n", b);
    else
        printf("c: %d is largest\n", c);
return 0;
}