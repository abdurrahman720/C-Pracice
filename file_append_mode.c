#include<stdio.h>

int main(){
    FILE *fa;
    fa=fopen("learn.txt","a");
    fprintf(fa,"\nLearning C Programming from buddy Programming Hero");
    fclose(fa);
    return 0;

}