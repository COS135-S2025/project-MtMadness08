/*Selects the difficulty*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "readFileEasy.h"
#include "readFileMedium.h"
#include "readFileHard.h"

int main(){
    int play = 0;
    int n = 0;
    printf("Type every word with a capital letter\nAll pokemon must be spelled correctly\n\n");

    //Select Difficulty
    while(play != 1){
    char buffer[20];
    printf("Select Difficulty:\n* Easy\n* Normal\n* Hard\n");
    fgets(buffer,sizeof(buffer),stdin);
    printf("\n");
    if(strncmp("Easy",buffer,4)==0){
        n=1;
    }
    else if(strncmp("Normal",buffer,4)==0){
        n=2;
    }
    else if(strncmp("Hard",buffer,4)==0){
        n=3;
    }
    else{printf("Invalid Input\n");}
    
    //Converts the buffer to an int to use the switch
    // Checks for a valid input

    switch(n){
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
        char player[20];
        printf("Play Again? y/n\n");
        fgets(player,sizeof(player),stdin);
        if(strncmp("y",player,1)==0){
            play=0;
        }
        else{
            printf("Thanks for Playing\n");
            play = 1;
        }
    }
}