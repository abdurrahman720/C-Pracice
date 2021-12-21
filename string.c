#include<stdio.h>
#include<string.h>


int main(){
    char stringOne[]="Programming";
    char stringTwo[]="Hero";
    char stringThree[12];
    int len;

    //copy stringOne to stringThree
    strcpy(stringThree, stringOne);
    printf("Copied value is: %s\n",stringThree);

    //concatenates stringOne and stringTwo
    strcat(stringOne, stringTwo);
    printf("Concatenated value is: %s\n",stringOne);

    /*comare between stringOne and stringTwo
    strcmp(stringOne, stringTwo);
    printf("Compared value is: %s\n",stringOne);*/

    //total length of string
    len = strlen(stringTwo);
    printf("Total length of string is: %d\n",len);

    return 0;
}