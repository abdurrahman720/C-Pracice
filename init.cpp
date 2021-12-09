#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string charcName= "John is a boy";
    int charIn= charcName.length(); //length is a function 
    char charf=charcName[10]; //third parenthesis conatains the index number 
    int charfind= charcName.find("i"); //from JavaS , it's IndexOf something 
    string charSub=charcName.substr(8, 5); //get string start the index from input1 to inout2
    int CharAge=50;
    
    cout<<charIn <<endl;
    cout<<charf<<endl;
    cout<<charfind<<endl;
    cout<<charSub<<endl;
    cout<<sqrt(36)<<endl; //from cmath library, pow is a func of Cube
    cout<<pow(3,3)<<endl; //from cmath lib, sqrt is a func of Root
    cout<<fmax(5,7)<<endl; // find the maximum numbe
    cout<<"Size of string: "<< sizeof(string)<<" bytes"<<endl;
    cout<<"Maximum value of Int: "<<INT_MAX<<endl;

}