#include<iostream>
using namespace std;

int main(){
    //reversing num

    int number, reversedNum=0; 

    cout<<"Number: ";
    cin>>number;

    while (number != 0)
    {   
        reversedNum *= 10;
        int lastDigit = number % 10;  //remainder will be the last digit you know babe!    
        reversedNum = reversedNum + lastDigit;  
        number = number/10; //we need to delete the last digit after pushing it to reversedNum  
    }
    cout<<"Number reversed: "<<reversedNum<<endl; 
     
}