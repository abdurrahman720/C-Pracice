#include<iostream>
using namespace std;

int main(){
    int count = 100;
    
    while(count<501){
        if (count%3==0 && count%5 == 0){
                 cout<<count<<" is Divisible\n"; 
        }
            //in if statemnet, if we are going to get just cout then we can ignore the brackets
        count++;
    }
}