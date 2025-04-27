/*Performs the function for guessing*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

int i = 0;

char arr[7][1024]={"1","2","3","4","5","6","Mew"};

int length = strlen(arr[6]);

//Steps through the guessing
printf("The Pokedex Number is: %s\n",arr[0]);

while(i<=5){
    int j = 1;
    char buffer[20];
    printf("Type Hint for Hint.\nType Pokemon Name to guess.\n");
    fgets(buffer,sizeof(buffer),stdin);

    if(strncmp("Hint",buffer,4)==0){
        printf("%s\n",arr[j]);
        j++;
    }
    else if(strncmp(arr[6],buffer,length)==0){
        printf("That was correct\n");
        i = 7;
    }
    else{
        printf("That was incorrect\n");
        i++;
    };}
}