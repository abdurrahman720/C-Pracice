#include<iostream>
using namespace std;

int main(){
    float num1, num2;
    char operation;
    cout<<"**Abdur's Calculator**"<<endl;
    cin>>num1>>operation>>num2;

    switch(operation){
        case '-' : cout<<num1<<operation<<num2<<"="<<num1-num2<<endl; break;
        
        case '+' : cout<<num1<<operation<<num2<<"="<<num1+num2<<endl; break;

        case '*' : cout<<num1<<operation<<num2<<"="<<num1*num2<<endl; break;

        case '/' : cout<<num1<<operation<<num2<<"="<<num1/num2<<endl; break;

        case '%' : 
                    bool isNum1Int,isNum2Int;
                   isNum1Int = ((int)num1==num1); //so that float 5.0 can be converted to int 5; then we check if int and float are the same
                                                  //not understood? let's think of 5.2; so after converting 5.2 to int 5 it will not be the same
                   isNum2Int = ((int)num2==num2);
                   if (isNum1Int&&isNum2Int)   //true and true; bcz data type is bool so it has just got the value of true or false
                   {
                       cout<<num1<<operation<<num2<<"="<<(int)num1 % (int)num2<<endl;
                   }
                   else{
                       cout<<"Invaild !"<<endl;
                   }
                   break;

            default: cout<<"Not valid operation"<<endl;

    }


    return 0;
}