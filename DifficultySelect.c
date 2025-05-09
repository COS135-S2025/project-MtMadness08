/*Selects the difficulty*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "readFileEasy.h"
#include "readFileMedium.h"
#include "readFileHard.h"
#include "Scores.h"
#include "ScoresList.h"

#define MAX_SPACES 2

int main()
{

    Scores *List = createScores();
    int play = 0;
    int n = 0;
    printf("Type every word with a capital letter\nAll pokemon must be spelled correctly\n\n");

    // Select Difficulty
    while (play != 1)
    {

        // Insert a new player
        char enter[20];
        printf("New Player? Y/N\n");
        fgets(enter, sizeof(enter), stdin);
        printf("\n");

        if (strncmp("Y", enter, 1) == 0 || strncmp("y", enter, 1) == 0)
        {
            char buffer[20];
            printf("Enter Name:\n");
            fgets(buffer, sizeof(buffer), stdin);
            printf("\n");

            Player *newPlayer = createPlayer(buffer);
            addPlayer(newPlayer, List);
        }
        else
        {
            printf("No new player \n");
        }

        // Difficulty Select. Checking for a valid input
        char buffer[20];
        printf("Select Difficulty:\n* Easy\n* Normal\n* Hard\n");
        fgets(buffer, sizeof(buffer), stdin);
        printf("\n");
        if (strncmp("Easy", buffer, 4) == 0 || strncmp("easy", buffer, 4) == 0 || strncmp("EASY", buffer, 4) == 0)
        {
            n = 1;
        }
        else if (strncmp("Normal", buffer, 4) == 0 || strncmp("normal", buffer, 4) == 0 || strncmp("NORMAL", buffer, 4) == 0)
        {
            n = 2;
        }
        else if (strncmp("Hard", buffer, 4) == 0 || strncmp("hard", buffer, 4) == 0 || strncmp("HARD", buffer, 4) == 0)
        {
            n = 3;
        }
        else
        {
            printf("Invalid Input\n");
        }

        // Converts the buffer to an int to use the switch

        switch (n)
        {
        case 1:
            printf("Difficulty Selected: Easy\n");
            readEasyFile();
            break;
        case 2:
            printf("Difficulty Selected: Normal\n");
            readMediumFile();
            break;
        case 3:
            printf("Difficulty Selected: Hard\n");
            readHardFile();
            break;
        }
        // Spaces out the play again question
        printf("\n");
        char player[20];
        printf("Play Again? Y/N\n");
        fgets(player, sizeof(player), stdin);
        if (strncmp("Y", player, 1) == 0 || strncmp("y", player, 1) == 0)
        {
            play = 0;
        }
        else
        {
            printf("Thanks for Playing\n");
            play = 1;
        }
    }
    // Frees the scores
    freeScores(List);
}