#include<iostream>
using namespace std;

int main(){
//weight(kg)/height*height(m)
//underweight<18.5
//normal weight: 18.5-24.9
//overweight : >25

    float a,b;
    cout<<"Enter your weight and height: "<<endl;
    cin>>a>>b;

    float bmi= a/(b*b);

    if(bmi<18.5){
        cout<<"Under Weight: "<<bmi<<endl;
    }
    else if(bmi>=25){
        cout<<"Over Weight: "<<bmi<<endl;
    }

    else{
        cout<<"Normal Weight: "<<bmi<<endl;
    }

    /*else{
        if(bmi>=25){
            cout<<"Over Weight: "<<bmi<<endl;
        }
        else{
            cout<<"Normal Weight: "<<bmi<<endl;
        }
    }*/

}