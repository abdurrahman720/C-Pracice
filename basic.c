#include<stdio.h>


int main(){
    int income,mincome;
    printf("Hi, what's your yearly income?\n");
    scanf("%d", &income);
    mincome = income/12;
    printf("Your monthly income is %d taka\n",mincome);

}