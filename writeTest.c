//testing writing to a file without removing the inside
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    FILE* pokemon = fopen("test.txt","r+");
    for(int i = 0; i<7; i++){
    fprintf(pokemon,"\n");}
    fclose(pokemon);


}