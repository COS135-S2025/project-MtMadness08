#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "Questions.h"
#include "Struct.h"

int main(){

    FILE* pokemon = fopen("test.txt","r");

    char Seven[7][1024];

    //Print off the Pokedex Number trimmed

    for (int i = 0; i<7; i++){
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
    
    Text* newSet = createText(Seven[0],Seven[1],Seven[2],Seven[3],Seven[4],Seven[5],Seven[6]);

    printText(newSet);


}