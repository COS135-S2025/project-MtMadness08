/*File to read the easy questions for the quiz*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE* pokemon = fopen("EasyFile.txt","r+");
    
    int Guess = 0;
    int Hint = 0;

    char buffer[1024];

    while(Guess != 5){
        char buffer[20];
        printf("Type ""Hint"" for hint.\nType name of Pokemon to guess.\n");
        fgets(buffer,sizeof(buffer),stdin);
        printf("\n");
        if(buffer == "Regice"){
            Guess=Guess+1;
            printf("Correct Answer\n");
        }
        

    }

    
    /*if(fgets(buffer,sizeof(buffer),pokemon)!=NULL)
        printf("%s\n", buffer);

    while(fgets(buffer,sizeof(buffer),pokemon)!=NULL){
        char *ptr = buffer + strlen(buffer) - 1;
        //Trim Buffer

       while(isspace(*ptr)) ptr--;

       *(ptr+1)=0;
       ptr = buffer;

       while(isspace(*ptr)) ptr++;
        

       printf("%s\n", buffer);

    }*/

    fclose(pokemon);
    printf("\n");
}
