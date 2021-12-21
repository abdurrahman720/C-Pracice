#include <iostream>
#include <iomanip>
using namespace std;

//create a program that takes a symble, height and width and then make a rectangle shape using nested for loops

int main(){
    int height,width;
    char symble;
    cout<< "Height:";
    cin>>height;
    cout<< "Width:";
    cin>>width;
    cout<< "Symble:";
    cin>>symble;
     
     for(int h=0;h<height;h++){ //for each height we need to print multiplle symbols as width
         for(int w=0;w<width;w++){ 
             cout<< setw(3) <<symble; //setw is a func imported from *iomanip* library that takes number as width and print blank space as width
         }
         cout<<endl; //after finishing a height we need to start with another one by a new line 
     }

}