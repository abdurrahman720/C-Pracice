#include<iostream>
using namespace std;

int main(){
    int userPin=1234,pin,errorCounter=1,attempts=3;

    do
    {
        cout<<"Enter pin number: "<<endl;
        cin>> pin;

        (pin!=userPin)? cout<<"Wrong Pin\n" && errorCounter++ && attempts-- && cout<<attempts<<" attempts left!\n" : cout<<"Unlocked!\n"; 

    } while (errorCounter<=3 && pin!=userPin);

    
}

//how can we show attempts left messages?  