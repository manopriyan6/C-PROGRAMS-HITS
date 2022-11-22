#include <stdio.h>
int main() {   
     
    //assing the intiger 

    int a, b, sub;
    
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    // calculating subtraction
    sub = a - b;      
    
    printf("%d + %d = %d", a, b, sub);
    return 0;
    
}