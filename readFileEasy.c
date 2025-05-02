/*File to read each of the difficulties, and write a new file*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NUM_LISTS 21
#define PARTS 7

void readEasyFile(){
    FILE* openFile = fopen("EasyFile.txt","r");

    char buffer[1024];
    char *List[NUM_LISTS][PARTS];

    //Puts each line of the file in each list.
    for(int i = 0; i<NUM_LISTS;i++){
        for(int j = 0; j<PARTS;j++){
                if(fgets(buffer,sizeof(buffer),openFile)!=NULL){
                    char *ptr = buffer + strlen(buffer) - 1;
                    //Trim Buffer
                    while(isspace(*ptr)) ptr--;
                    *(ptr+1)=0;
                    ptr = buffer;
                    while(isspace(*ptr)) ptr++;
                    }
                //Puts each buffer into the list
                List[i][j] = malloc(sizeof(buffer)+2);
                    strcpy(List[i][j],buffer);
            }
        }
    fclose(openFile);

////////////////////////////////////////////////////////////////////////
    /*Makes a new file with the first set moved down*/
    FILE* newFile = fopen("Copy.txt","w");
    for(int i = 1; i<NUM_LISTS;i++){
        for(int j = 0; j<PARTS;j++){
        fprintf(newFile,"%s\n",List[i][j]);
        }
    }
    for(int i = 0; i<7;i++){
        fprintf(newFile,"%s\n",List[0][i]);
    }

    fclose(newFile);

    //Deletes the old text file
    remove("EasyFile.txt");
    //Renames the text file
    rename("Copy.txt","EasyFile.txt");
////////////////////////////////////////////////////////////////////////

    /*Steps through the questions*/

int Guesses = 0;
int Hint = 1;
int Length = strlen(List[0][6]);

//Steps through the guessing
printf("The Pokedex Number is: %s\n",List[0][0]);

while(Guesses<=4){
    int Remaining = 5 - Guesses;
    char buffer[20];
    printf("%d Guesses Remain\nType Hint for Hint.\nType Pokemon Name to guess.\n",Remaining);
    fgets(buffer,sizeof(buffer),stdin);

    //Asks for hint
    if(strncmp("Hint",buffer,4)==0){
        if (Hint>5){
            printf("No More Hints\n");
                }
        else{
            printf("%s\n",List[0][Hint]);
            Hint++;}
    }
    //Checks to see if correct if not a hint
    else if(strncmp(List[0][6],buffer,Length)==0){
        printf("That was correct\n");
        Guesses = 7;
    }
    //States incorrect
    else{
        if(Guesses>=4){
            printf("That Was Incorrect.\nThe Correct Answer Was %s",List[0][6]);
        Guesses++;
        }
        else{printf("That was incorrect\n");
        Guesses++;};
        }
    }




}