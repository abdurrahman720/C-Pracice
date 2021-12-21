#include<iostream>
using namespace std;


bool isPrimeNum(int number){
    bool isPrime=true; //we can do it also using 'else' but be smart, write code shortly 
    for(int i=2; i<number; i++){
        if(number%i==0){
           isPrime=false;
           break;
        }
        //else return true
    }
    return isPrime;
}

int main(){
    int number;
    cout<<"Number:" ;
    cin>>number;
   
   bool isPrimeCheck=isPrimeNum(number);

    if(isPrimeCheck==true) //no need to decalre true or false; default is true
    cout<<"Prime Number"<<endl;  //no need to use brackets for cout

    else
    cout<<"Not Prime Number"<<endl;

}

/* do it another way:
    bool isPrimeNum(int number){
    for(int i=2; i<number; i++){
        if(number%i==0)
           return false;
    }
    return true;
 }

**using while loop:
bool isPrimeNum(int number){
    int i=2;
while(i<number){
    if (number%i==0)
    return false;

    else
    i++;
}
return true;
}

 */
