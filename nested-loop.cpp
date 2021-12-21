#include <iostream>
using namespace std;

//we need to get 3 grade from user and calculate the average. the grade should be between 1 and 5 and maximum number of grade is 3.


int main(){
    int grade, sum=0.0;

for (int i = 0; i < 3; i++)
{
    do{
        cout<<"Enter grade "<< i+1 <<" :"<<endl;
        cin>>grade;
    }while(grade<1 || grade>5);

    sum+=grade;
}

   cout<<"Sum = "<<sum<<endl;
   cout<<"Avg grade = "<<(float)sum/3.0<<endl;
    

}