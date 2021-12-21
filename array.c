#include <stdio.h>
#include <string.h>


//there is no string data type in c; we can assign string by char array

int main(){
    char string[]={'h','e','l','l','o','\n'};
    printf("%s\n",string);
}


int main(){
    int num [3]={1,2,3};
    for (int i=0; i<3;i++){
        printf("%d \n",num[i]);
    }
   return 0;
}

//we can also assign values using indices

int mainD(){
    int num[3];
    num[0]=1;
    num[1]=5;
    num[2]=3;
  for (int i=0; i<3;i++){
        printf("%d \n",num[i]);
    }
    return 0;

}