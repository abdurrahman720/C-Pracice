#include<iostream>
using namespace std;

int main(){
    //count digits of a number
    int number;
    cout<< "Number: ";
    cin>>number;

    if (number==0){
        cout<< "You have entered 0."<<endl;
    }
    else{

        if(number<0){
            number= -1*number; //so that we can convert the negative number to a positive
        }
        int count=0;
        while(number>0){
            number=number/10; //both are int number and thats why after diving with 10, the digit after (.) is gonna to be removed and count++! again while!
            count++;
        }
        cout<<" Number contains "<< count << " digits."<<endl;
    }
}