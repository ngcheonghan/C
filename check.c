#include<stdio.h>


int main(){

    int age;

    printf("\nEnter your age:");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are now signed up!");
    }
    else if (age < 0){
        printf("You havent been born yet!");
    }
    else{
        printf("You are too yung to sign up!");
    }


    return 0;
}