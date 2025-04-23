#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    int i = 0;

    char buffer[1024];
    char space[1024];

    ////////////////////

    FILE* pokemon = fopen("test.txt","w");
    
    for(int i = 0; i<7; i++)
        fprintf(pokemon," ");
    
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