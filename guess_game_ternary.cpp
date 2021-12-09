#include<iostream>
using namespace std;

int main(){
    int hostUserNum, guestUserNum;
    cout<<"Host: ";
    cin>>hostUserNum;
    system("cls");

    cout<<"Guest: ";
    cin>>guestUserNum;

    /*if(hostUserNum==guestUserNum){
        cout<<"Correct"<<endl;
    }
    else{
        cout<<"Wrong"<<endl;
    }*/

    //ternary Operator:
    (hostUserNum==guestUserNum)? cout<<"Correct"<<endl : cout<<"Wrong"<<endl;


}