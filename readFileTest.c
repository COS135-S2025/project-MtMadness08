/*File to read the easy questions for the quiz*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define HINT_SIZE 7

void readEasyFile(){
    FILE* pokemon = fopen("EasyFile.txt","r");

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
    for (int i = 0; i<HINT_SIZE; i++){
        printf("%s\n",Seven[i]);
    }
        
        
    
       
    
    /* if(fgets(buffer,sizeof(buffer),pokemon)!=NULL)
        printf("%s\n", buffer);

    while(fgets(buffer,sizeof(buffer),pokemon)!=NULL){
        char *ptr = buffer + strlen(buffer) - 1;
        //Trim Buffer

       while(isspace(*ptr)) ptr--;

       *(ptr+1)=0;
       ptr = buffer;

       while(isspace(*ptr)) ptr++;

       printf("%s\n", ptr);

    }*/
    fclose(pokemon);
    printf("\n");
}
