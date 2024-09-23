#include<stdio.h>

void birthday(char x[],int y)
{
    printf("\nHappy birthday dear %s!", x);
    printf("\nYou are %d years old!", y);
}

int main()
{
    char name[25];
    int age;

    printf("\nWhat is your name?");
    scanf("%s",&name);

    printf("\nHow old are you?");
    scanf("%d",&age);

    birthday(name,age);

    return 0;
}