#include <stdio.h>
int main() {   
     
    //assing the intiger 

    int a, b, divide;
    
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    // calculating divition
    divide = a / b;      
    
    printf("%d + %d = %d", a, b, divide);
    return 0;
    
}