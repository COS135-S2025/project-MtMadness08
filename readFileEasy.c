/*File to read the file for easy difficulty, and write a new file*/

#include "readFileEasy.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NUM_LISTS 21
#define PARTS 7

void readEasyFile()
{

    // Opens the file that will be used to play the difficulty
    // This always takes in the Easy file, and always in read mode
    FILE *openFile = fopen("EasyFile.txt", "r");
    // Sets the buffer for taking text inputs, and an array 
    // for the document itself
    char buffer[1024];
    char *List[NUM_LISTS][PARTS];

    // Puts each line of the file into the array
    // It sets each section of the array, and inputs 7 items
    // From the easyfile. 
    for (int i = 0; i < NUM_LISTS; i++)
    {
        for (int j = 0; j < PARTS; j++)
        {
            if (fgets(buffer, sizeof(buffer), openFile) != NULL)
            {
                char *ptr = buffer + strlen(buffer) - 1;
                // Trim Buffer
                while (isspace(*ptr))
                    ptr--;
                *(ptr + 1) = 0;
                ptr = buffer;
                while (isspace(*ptr))
                    ptr++;
            }
            // Puts each part of the file into the list
            // 
            List[i][j] = malloc(sizeof(buffer) + 2);
            // List is malloced to use only what is neaded
            strcpy(List[i][j], buffer);
        }
    }
    // Closes the file that it read all the information from
    fclose(openFile);

    ////////////////////////////////////////////////////////////////////////

    // Makes a new file
    // This file is to be a copy of the original Easy file
    FILE *newFile = fopen("Copy.txt", "w");

    // Prints off each line from the list into the file 
    // The first seven lines get pushed to the back
    for (int i = 1; i < NUM_LISTS; i++)
    {
        for (int j = 0; j < PARTS; j++)
        {
            fprintf(newFile, "%s\n", List[i][j]);
        }
    }
    for (int i = 0; i < 7; i++)
    {
        fprintf(newFile, "%s\n", List[0][i]);
    }

    fclose(newFile);

    // Deletes the old Easy file
    remove("EasyFile.txt");

    // Renames the copy to the easy file
    rename("Copy.txt", "EasyFile.txt");

    ////////////////////////////////////////////////////////////////////////

    // Steps through the questions

    // Sets integers for your guess amount, 
    // hint number, and the length of the answer

    int Guesses = 0;
    int Hint = 1;
    int Length = strlen(List[0][6]);

    // Prints off the first hint, Which is the first string
    // of the original easy file
    printf("The Pokedex Number is: %s\n\n", List[0][0]);

    // Steps through the guessing counts down as you answer
    // incorrectly
    while (Guesses <= 4)
    {
        int Remaining = 5 - Guesses;

        // Takes an input
        char buffer[20];
        printf("%d Guesses Remain\nType Hint for Hint.\nType Pokemon Name to guess.\n", Remaining);
        fgets(buffer, sizeof(buffer), stdin);

        // If player asks for a hint it prints a hint if 
        // there are remaining hints
        if (strncmp("Hint", buffer, 4) == 0 || strncmp("hint", buffer, 4) == 0 || strncmp("HINT", buffer, 4) == 0)
        {
            if (Hint > 5)
            {
                printf("No More Hints\n");
            }
            else
            {
                printf("%s\n\n", List[0][Hint]);
                Hint++;
            }
        }
        // If player does not type 'Hint' it checks the guess input
        else if (strncmp(List[0][6], buffer, Length) == 0)
        {
            printf("That was correct\n");
            Guesses = 7;
        }

        // If its not a correct guess or then it informs you
        else
        {
            // Only prints off once the player has lost
            if (Guesses >= 4)
            {
                printf("That Was Incorrect.\nThe Correct Answer Was %s", List[0][6]);
                Guesses++;
            }
            else
            {
                printf("That was incorrect\n");
                Guesses++;
            };
        }
    }

    // Frees the array of the original list.

    for (int i = 0; i < NUM_LISTS; i++)
    {
        for (int j = 0; j < PARTS; j++)
        {
            free(List[i][j]);
        }
    }
}