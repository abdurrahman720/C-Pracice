#include<iostream>
using namespace std;

int main(){
    float a,b,c,d;
    cout<<"a,b,c: "<<endl;
    cin>>a>>b>>c;

    if(a==b&&b==c){
        cout<<"Equilateral Triangle"<<endl;
    }
    else{
        if(a != b && a != c && b != c){
            cout<<"Scalene Triangle"<<endl;
        }
        else{
            cout<<"isoscelens Triangle"<<endl;
        }
    }
   
}