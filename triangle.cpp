#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int height,width;
    char symble;
    cout<< "Height:";
    cin>>height;
    cout<< "Symble:";
    cin>>symble;
     
     for(int h=0;h<height;h++){ //for each height we need to print symbol for each height
         for(int w=0;w<=h;w++){  //for every h , print symbol 
             cout<<setw(3)<<symble; //setw is a func imported from *iomanip* library that takes number as width and print blank space as width
         }
         cout<<endl; //after finishing a height we need to start with another one by a new line 
     }

     cout<<endl<<endl;

     
     for(int h=height;h>=1;h--){ 
         for(int w=1;w<=h;w++){  
             cout<<setw(3)<<symble; //setw is a func imported from *iomanip* library that takes number as width and print blank space as width
         }
         cout<<endl; //after finishing a height we need to start with another one by a new line 
     }

}


/*  for reversed triangle, we could also use the following for loop :

for(int h=0;h<height;h++){ 
         for(int w=height;w>h;w--) */

