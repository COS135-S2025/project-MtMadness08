#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    
    char *arr[50] = {};
    for (int i = 0; i<1; i++){
        char buffer[20];
        printf("Enter a word:\n");
        fgets(buffer,sizeof(buffer),stdin);
        printf("\n");

        arr[i]= buffer;
    }
    char **ptr = arr;

    printf("%s",ptr[0]);

    


}