#include <stdio.h>
int main() {   
     
    //assing the intiger 

    int a, b, multi;
    
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    // calculating multiplications
    multi = a * b;      
    
    printf("%d + %d = %d", a, b, multi);
    return 0;
    
}