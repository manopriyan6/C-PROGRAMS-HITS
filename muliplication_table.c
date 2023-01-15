//To print the multiplication table using for loop
#include <stdio.h>
//include <conio.h> **if you are using in turoo c
{
    int num,i;//assigning the variable 
    printf("Enter an interger : ");
    scanf("%d",&num);//assiging value to the variable
    for( i=1 ;i<=10; i++)//here i determines the integer i++ is for incriment 
    {
    printf("%d*%d=%d\n",i,num,(num*i));//print in an order 
    }
    return 0;// not req*uired *if you are using in turoo c 
    //grtch()**if you are using in turoo c 
}