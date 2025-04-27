/*File to read the easy questions for the quiz*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define HINT_SIZE 7

int main(){
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
    for (int i = 0; i<HINT_SIZE; i++){
        printf("%s\n",Seven[i]);
    }
    
    int i = 0;

int length = strlen(Seven[6]);

//Steps through the guessing
printf("The Pokedex Number is: %s\n",Seven[0]);

while(i<=5){
    int j = 1;
    char buffer[20];
    printf("Type Hint for Hint.\nType Pokemon Name to guess.\n");
    fgets(buffer,sizeof(buffer),stdin);

    if(strncmp("Hint",buffer,4)==0){
        printf("%s\n",Seven[j]);
        j++;
    }
    else if(strncmp(Seven[6],buffer,length)==0){
        printf("That was correct\n");
        i = 7;
    }
    else{
        printf("That was incorrect\n");
        i++;
    };}
        
    
       
    
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
