#include <stdio.h>
int main() {    
    //assing the intiger 

    int a, b, sum;
    
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    // calculating addition
    sum = a + b;      
    
    printf("%d + %d = %d", a, b, sum);
    return 0;
    
}