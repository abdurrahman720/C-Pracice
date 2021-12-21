#include<stdio.h>

struct Student{
    char username[10];
    char email[20];
    char password[15];
    int age;
} studentOne;

int main(){
    printf("Enter details if First student\n");
    printf("Enter the name: ");
    scanf("%s", &studentOne.username);

    printf("Enter the email: ");
    scanf("%s", &studentOne.email);

    printf("Enter the password: ");
    scanf("%s", &studentOne.password);

    printf("Enter the age: ");
    scanf("%d", &studentOne.age);

    //printing data

    printf("The details taken are given below\n");
    printf("Username is: %s\n", studentOne.username);
    printf("email is: %s\n", studentOne.email);
    printf("Password is: %s\n", studentOne.password);
    printf("Age is: %d\n", studentOne.age);

    return 0;
}
