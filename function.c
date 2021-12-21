#include<stdio.h>
int globalNum; //this the the example of global scope


//defining function
int addN(int num1, int num2){
        int result;
        result = num1 + num2;  //example of local scope bcz the result varibale is only accessible here. the next result var will be diffrent
        return result;
    }

void hello(){
    printf("Hello world\n");
}

int main(){
    
    int number1,number2,result;
    printf("Enter your two number: ");
    scanf("%d %d", &number1, &number2); //to get multiple input, we don't need to add comma in the data format section 
    result=addN(number1,number2); 
    printf("Addition is %d \n",result);
    

 return 0;
}

int mainS(){
    hello();
    return 0;
}