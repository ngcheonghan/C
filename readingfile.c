#include<stdio.h>

int main(){

    FILE *pF = fopen("C:\\Users\\han52\\OneDrive\\Desktop\\poem.txt", "r");
    char buffer[255];


    if (pF == NULL)
    {
        printf("Unable to open the file!\n");
    }
    else
    {
        while (fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
    }

    fclose(pF);

    return 0;
}