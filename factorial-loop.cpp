#include<iostream>
using namespace std;

int main(){
    int num;
    cout<< "Input your number:"<<endl;
    cin >> num;

    int factorial=1;

    for (int i=1; i<=num; i++) {  //we can do this also: for(int i=num;i>=1;i--){...}
        factorial=factorial * i;  
    }
cout<< "factorial of "<<num<<" is: "<<factorial<<endl;
}