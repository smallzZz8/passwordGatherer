#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[256];
    int i = 0;

    printf("Welcome to the password gatherer!\n");

//Opens File
    FILE *fp = fopen("C:\\Users\\The Clone Trooper\\Desktop\\test.txt", "w");
    if(fp == NULL){
        printf("Couldn't open\n");
        return 0;
    }
    else{
        printf("File opened successfully!\n");
    }

//Gets user passwords and stores them in a file
    printf("Please enter each password then hit enter. Once done please type exit. \n")
    while (strcmp(text, "exit") != 0){
        scanf("%s", &text);

        if(strcmp(text, "exit") != 0){
            fprintf(fp, "%s\n", text);
        }else{
            break;
        }

    }

    printf("All passwords have been saved. Thanks!\n");

    fclose(fp);
    return 0;
}
