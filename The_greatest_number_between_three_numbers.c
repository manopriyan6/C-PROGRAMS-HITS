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

if((a>b)&&(a>c))
    {
        printf("a: %d is largest\n", a);
    }
if((b>c)&&(b>a))
    {  
        printf("b: %d is largest\n", b);    
    }
if((c>a)&&(c>b))
    {  
        printf("c: %d is largest\n", c);    
    }
return 0;
}