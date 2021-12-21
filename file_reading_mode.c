#include <stdio.h>

int main(){
    FILE *file;
    char data[255];
    file=fopen("learn.txt","r");
    while(fscanf(file,"%s",data) != EOF) {
        printf("%s\n",data);
    }
    fclose(file);
    return 0;
}

/* reading mode means, you want your comouter to read (scan) something from a third party user of file */