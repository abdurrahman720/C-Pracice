#include <iostream>
using namespace std;
int main()
{
	float weight, height, bmi;
	cout<<"weight:";
	cin>>weight;
	cout<<"height:";
	cin>>height;

	bmi = weight/(height*height);
	if(bmi<18.5){
		cout<<"you are underweight"<<endl;
	}
	else if(bmi>25){
		cout<<"you are overweight"<<endl;
	}
	else{
	cout<<"you are normal"<<endl;
	}
	
	cout<< "your bmi is"<<bmi;
			
	return 0;
}