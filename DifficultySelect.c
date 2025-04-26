/*Select the difficulty*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void difficulty(){

    //Select Difficulty
    char buffer[20];
    printf("Select Difficulty 1-3:\n1. Easy\n2. Normal\n3. Hard\n");
    fgets(buffer,sizeof(buffer),stdin);
    printf("\n");
    
    //Converts the buffer to an int to use the switch
    int n = atoi(buffer);
    // Checks for a valid input
    if(n != 1 && n != 2 && n != 3){
        printf("Invalid Input");
        return 0;
    }

    switch(n){
        case 1:
            printf("Difficulty Selected: Easy\n");
            break;
        case 2:
            printf("Difficulty Selected: Normal\n");
            break;
        case 3:
            printf("Difficulty Selected: Hard\n");
            break;
    }

}