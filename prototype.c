#include<stdio.h>

void hello(char[], int);//function prototype

int main()
{
    char name[] = "Hans";
    int age = 21;

    hello(name , age);

    return 0;

}

void hello(char name[], int age)
{
    printf("\nHello %c", name);
    printf("\nYou are %d years old", age);
}