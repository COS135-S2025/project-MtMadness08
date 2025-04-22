#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    FILE* name = fopen("EasyFile.txt","r");

    int i = 0;

    char buffer[1024];
    char space[1024];

    for (int i = 0; i<7; i++){
        if(fgets(space,sizeof(space),name)!=NULL){
            char *ptr1 = space + strlen(space) - 1;
            //Trim Buffer
            while(isspace(*ptr1)) ptr1--;
            *(ptr1+1)=0;
            ptr1 = space;
            while(isspace(*ptr1)) ptr1++;}}
    printf("%s",space);
    fclose(name);

    ////////////////////

    FILE* pokemon = fopen("EasyFile.txt","r");
    
    char *Seven[7];

    char **point = Seven;

    while (i < 7){
        if(fgets(buffer,sizeof(buffer),pokemon)!=NULL){
            char *ptr = buffer + strlen(buffer) - 1;
            //Trim Buffer
            while(isspace(*ptr)) ptr--;
            *(ptr+1)=0;
            ptr = buffer;
            while(isspace(*ptr)) ptr++;
            printf("%s",buffer);
        }
        char buffer[20];
        printf("Type ""Hint"" for a Hint.\nType Pokemon name to guess.\n");
        fgets(buffer,sizeof(buffer),stdin);
    }
    
    /*char *arr[3] = {"","",""};
    char **ptr = arr;
    for (int i = 0; i<3; i++){
        char buffer[20];
        printf("Enter a word:\n");
        fgets(buffer,sizeof(buffer),stdin);
        printf("\n");

        ptr[i]= buffer;
    }
    for (int i = 0; i<3; i++){
    printf("%s",arr[i]);}
    


    //Print off the Pokedex Number trimmed

    for (int i = 0; i<7; i++){
        if(fgets(buffer,sizeof(buffer),pokemon)!=NULL)
            printf("%s\n", buffer);
            
            Seven[i]={buffer};

        }
        for(int j = 0; j<7; j++){
        printf("%s\n",point[j]);}

    fclose(pokemon);*/
    


}