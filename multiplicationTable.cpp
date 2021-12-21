#include<iostream>
using namespace std;

//MultiplicationTable using nested for loops
int main(){
    for (int i =1; i<=10; i++) {
        for (int j =1; j<=10; j++) {
            int result= i * j;
            cout<<i<<" * "<<j<<"="<<result<<endl;
        }
        cout<<endl;
    }
    
}