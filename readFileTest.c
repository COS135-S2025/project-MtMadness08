/*File to read the easy questions for the quiz*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE* pokemon = fopen("EasyFile.txt","r");
    
    char buffer[1024];

    //Print off the Pokedex Number trimmed

    if(fgets(buffer,sizeof(buffer),pokemon)!=NULL){
        char *ptr = buffer + strlen(buffer) - 1;
        //Trim Buffer

       while(isspace(*ptr)) ptr--;

       *(ptr+1)=0;
       ptr = buffer;

       while(isspace(*ptr)) ptr++;
    
       printf("%s\n",ptr);}
    
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
