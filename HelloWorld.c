#include<stdio.h>

int main(){

    int age;
    char name[25];

    printf("\nWhat is your name?");
    scanf("%s",&name);

    printf("\nHow old are you?");
    scanf("%d",&age);

    printf("\nHello %s, how are you?",name);
    printf("\nYour age is %d years old!",age);

    return 0;
}