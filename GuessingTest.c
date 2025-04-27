/*Performs the function for guessing*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

int i = 0;

char arr[7][1024]={"1","2","3","4","5","6","Mew"};

int length = strlen(arr[6]);

    while(i!=7){

    char buffer[20];
    printf("Print Pokemon Name\n");
    fgets(buffer,sizeof(buffer),stdin);
    if(strncmp(arr[6],buffer,length)==0){
        printf("That was correct\n");
        i = 7;
    }
    else{
        printf("That was incorrect\n");
        i++;
    };}
}