#include<iostream>
using namespace std;

void showMenu(){
    cout<<"********Menu********"<<endl;
    cout<<"1. Check Balance" << endl;
    cout<<"2. Deposite"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"********************"<<endl;
}


bool verification(){
    int password;
    cout<<"Enter your password..."<<endl;
    cin>>password;
    if(password==120836){
        cout<<"Verification successfull!"<<endl;
        return true;
        //cout<<"Your balance is: "<< balance<<endl;
    }
    
    else{cout<<"Incorrect Password"<<endl;
    return false;}
}


int main(){
    int option;

    showMenu();
    cout<<"Option: "<<endl;
    cin>>option;
    double balance=500;
    int pass;

   
        switch(option){
        case 1:{ 
                cout<<"***Check Balance ***"<<endl;
                bool verified= verification();
                if(verified) {cout<<"Your balance is: "<<balance<<endl;}
                break;
        }
        case 2: {
                cout<<"***Money Deposite***"<<endl;
                bool verified= verification();
                double depAmount;
                if(verified){
                    cout<<"Enter your amount to deposit: "<<endl;
                    cin>>depAmount;
                    cout<<"Processig..."<<endl<<endl;
                    balance+=depAmount;
                    cout<<"Money Deposited Successfully!!"<<endl<<endl;
                    cout<<"Your new balance is: "<<balance<<endl;
                }
                break;
        }
        case 3: {
                cout<<"***Withdraw***"<<endl;
                bool verified= verification(); //verification processig...
                double witAmount;
                if(verified){
                    
                    cout<<"Enter your amount to withdraw: "<<endl;
                    cin>>witAmount;
                    cout<<"Checking Balance..."<<endl<<endl;
                    if(witAmount<=balance){
                        cout<<"Moeny Withdrawn "<<witAmount<<" $ is Successfull!"<<endl<<endl;
                        balance-=witAmount;

                        cout<<"New Balance is: "<<balance<<"$"<<endl;
                    }
                    
                }
                break;
                }  
    }
    
}