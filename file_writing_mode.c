#include<stdio.h>

int main(){
    FILE *fp;
    fp=fopen("learn.txt","w");
    fprintf(fp,"hello c");
    fclose(fp);
    return 0;
}
 
/* so writing mode in programming is that you want your computer write somethng (print) on your preferred location,3rd party or file */
// in writing mode, strings are usually overwritten. we can use append mode for that.