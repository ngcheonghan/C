#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;


    srand(time(0));

    answer = (rand() % MAX) + MIN;

    //printf("%d", answer);

    do{
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if(guess < answer)
        {
            printf("Too low!\n");
        }
        else{
            printf("Correct!\n");
        }
        guesses++;
    }while(guess != answer);

    printf("***********************\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);
    printf("***********************");

    return 0;
}