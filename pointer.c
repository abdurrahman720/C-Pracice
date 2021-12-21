#include<stdio.h>


int main(){
    int number = 5;
    int *numPointer;
    numPointer=&number;

    printf("Address of number variable is: %x \n", &number);
    printf("Address strored in numPointer varibale is: %x \n", numPointer);
    printf("Value of numPointer variable is: %d \n", *numPointer);
}

