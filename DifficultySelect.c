/*Select the difficulty*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "readFileEasy.c"
#include "readFileMedium.c"
#include "readFileHard.c"
#include "readFileExtraHard.c"

void difficulty(){
    int play = 0;

    //Select Difficulty
    while(play != 1){
    char buffer[20];
    printf("Select Difficulty 1-3:\n1. Easy\n2. Normal\n3. Hard\n");
    fgets(buffer,sizeof(buffer),stdin);
    printf("\n");
    
    //Converts the buffer to an int to use the switch
    int n = atoi(buffer);
    // Checks for a valid input
    if(n != 1 && n != 2 && n != 3){
        printf("Invalid Input");
    }

    switch(n){
        case 1:
            printf("Difficulty Selected: Easy\n");
            readEasyFile();
            break;
        case 2:
            printf("Difficulty Selected: Normal\n");
            //readNormalFile();
            break;
        case 3:
            printf("Difficulty Selected: Hard\n");
            //readHardFile();
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