//testing writing to a file without removing the inside
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Text{
    char string[20][20];
}Text;
int main(){

    FILE* pokemon = fopen("test.txt","r");

    Text first;

    for(int j = 0; j<2;j++){
        printf("Array #%d\n",j);
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
        strcpy(first.string[i],buffer);
    }
    for(int i = 0; i<7; i++){
        printf("%s\n",first.string[i]);
    }
    printf("\n");
    
}
}