#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

int i = 0;

char arr[7][1024]={"1","2","3","4","5","6","Regice"};

    char buffer[20];
    printf("Print Pokemon Name\n");
    fgets(buffer,sizeof(buffer),stdin);

    while(i!=7){
    if(strncmp(arr[6],buffer,6)==0){
        printf("That was correct\n");
        i++;
    }
    else{
        printf("That was incorrect\n");
        i++;
    };}

/*for(int i = 0; i<7; i++){
    printf("%s",arr[i]);
}*/

}

    /*char buffer[20];
    printf("Select Difficulty 1-3:\n1. Easy\n2. Normal\n3. Hard\n");
    fgets(buffer,sizeof(buffer),stdin);
    printf("\n");*/