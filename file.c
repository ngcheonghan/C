#include<stdio.h>

int main()
{
    FILE *pF = fopen("C:\\Users\\han52\\OneDrive\\Desktop\\test.txt", "w");


    fprintf(pF, "Hans");

    fclose(pF);

    /*
    if (remove("test.txt") == 0)
    {
        printf("File deleted successfully!");
    }
    else
    {
        printf("File was not deleted!");
    }
    */
    

    return 0;
}