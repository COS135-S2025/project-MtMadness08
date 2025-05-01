//testing writing to a file without removing the inside
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Text{
    char string[20][20];
}Text;

typedef struct Array{
    struct Question** Text;
    int num_questions;
    
} Array;

Array* createArray(int num){ //Creates the array
    Array* n = malloc(sizeof(Array));
    n -> num_questions = 0;
    n -> Text = malloc(sizeof(Text*));

}

void freeArray(Array* array){ //Frees the array
    for(int i = 0; i < array->num_questions; i++){
        free(array->Text[i]);
    }

}

void addSet(Text* set, Array* number){ //Adds the set
    number->Text[number->num_questions]=set;

}

int main(){

    FILE* pokemon = fopen("test.txt","r");

    Array* Questions[2]; //Creates the array of structs

    for(int i =0; i<2; i++){ //Creates two spaces for the array
    Questions[i] = createArray(1+i);
    };
    int total = 2;
    Text newSet[total];
    for(int j = 0; j<2; j++){
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
        strcpy(newSet[j].string[i],buffer);
    }
    }

    for(int i = 0; i<2; i++){//Adds in the sets of the structs
    addSet(newSet,Questions[i]);}
    for(int j = 0; j < 2; j++){
        for(int k = 0; k<7;k++){
    printf("\n",newSet[j]);
    }}
}   