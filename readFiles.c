/*File to read the easy questions for the quiz*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define HINT_SIZE 7

void readEasyFile(){
    FILE* pokemon = fopen("EasyFile.txt","r");

    char Seven[HINT_SIZE][1024];

    //Print off the Pokedex Number trimmed

    for (int i = 0; i<HINT_SIZE; i++){
        char buffer[1024];
        if(fgets(buffer,sizeof(buffer),pokemon)!=NULL){
            char *ptr = buffer + strlen(buffer) - 1;
            //Trim Buffer
            while(isspace(*ptr)) ptr--;
            *(ptr+1)=0;
            ptr = buffer;
            while(isspace(*ptr)) ptr++;
            }
            strcpy(Seven[i],buffer);
        }
//Sets up for strings 

int Guesses = 0;
int j = 1;
int length = strlen(Seven[6]);

//Steps through the guessing
printf("The Pokedex Number is: %s\n",Seven[0]);

while(Guesses<=4){
    int Remaining = 5 - Guesses;
    char buffer[20];
    printf("%d Guesses Remain\nType Hint for Hint.\nType Pokemon Name to guess.\n",Remaining);
    fgets(buffer,sizeof(buffer),stdin);
    //Asks for hint
    if(strncmp("Hint",buffer,4)==0){
        if (j>5){
            printf("No More Hints\n");
                }
        else{
            printf("%s\n",Seven[j]);
            j++;}
    }
    //Checks to see if correct if not a hint
    else if(strncmp(Seven[6],buffer,length)==0){
        printf("That was correct\n");
        Guesses = 7;
    }
    //States incorrect
    else{
        printf("That was incorrect\n");
        Guesses++;
    };}
    printf("The correct pokemon was %s\n",Seven[6]);
    fclose(pokemon);
}

void readNormalFile(){
    FILE* pokemon = fopen("NormalFile.txt","r");

    char Seven[HINT_SIZE][250];

    //Print off the Pokedex Number trimmed

    for (int i = 0; i<HINT_SIZE; i++){
        char buffer[1024];
        if(fgets(buffer,sizeof(buffer),pokemon)!=NULL){
            char *ptr = buffer + strlen(buffer) - 1;
            //Trim Buffer
            while(isspace(*ptr)) ptr--;
            *(ptr+1)=0;
            ptr = buffer;
            while(isspace(*ptr)) ptr++;
            }
            strcpy(Seven[i],buffer);
        }
//Sets up for strings 

int Guesses = 0;
int j = 1;
int length = strlen(Seven[6]);

//Steps through the guessing
printf("The Pokedex Number is: %s\n",Seven[0]);

while(Guesses<=4){
    int Remaining = 5 - Guesses;
    char buffer[20];
    printf("%d Guesses Remain\nType Hint for Hint.\nType Pokemon Name to guess.\n",Remaining);
    fgets(buffer,sizeof(buffer),stdin);
    //Asks for hint
    if(strncmp("Hint",buffer,4)==0){
        if (j>5){
            printf("No More Hints\n");
                }
        else{
            printf("%s\n",Seven[j]);
            j++;}
    }
    //Checks to see if correct if not a hint
    else if(strncmp(Seven[6],buffer,length)==0){
        printf("That was correct\n");
        Guesses = 7;
    }
    //States incorrect
    else{
        printf("That was incorrect\n");
        Guesses++;
    };}
    printf("The correct pokemon was %s\n",Seven[6]);
    fclose(pokemon);
}

void readHardFile(){
    FILE* pokemon = fopen("HardFile.txt","r");

    char Seven[HINT_SIZE][250];

    //Print off the Pokedex Number trimmed

    for (int i = 0; i<HINT_SIZE; i++){
        char buffer[1024];
        if(fgets(buffer,sizeof(buffer),pokemon)!=NULL){
            char *ptr = buffer + strlen(buffer) - 1;
            //Trim Buffer
            while(isspace(*ptr)) ptr--;
            *(ptr+1)=0;
            ptr = buffer;
            while(isspace(*ptr)) ptr++;
            }
            strcpy(Seven[i],buffer);
        }
        
//Sets up for strings 

int Guesses = 0;
int j = 1;
int length = strlen(Seven[6]);

//Steps through the guessing
printf("The Pokedex Number is: %s\n",Seven[0]);

while(Guesses<=4){
    int Remaining = 5 - Guesses;
    char buffer[20];
    printf("%d Guesses Remain\nType Hint for Hint.\nType Pokemon Name to guess.\n",Remaining);
    fgets(buffer,sizeof(buffer),stdin);
    //Asks for hint
    if(strncmp("Hint",buffer,4)==0){
        if (j>5){
            printf("No More Hints\n");
                }
        else{
            printf("%s\n",Seven[j]);
            j++;}
    }
    //Checks to see if correct if not a hint
    else if(strncmp(Seven[6],buffer,length)==0){
        printf("That was correct\n");
        Guesses = 7;
    }
    //States incorrect
    else{
        printf("That was incorrect\n");
        Guesses++;
    };}
    printf("The correct pokemon was %s\n",Seven[6]);
    fclose(pokemon);
}
