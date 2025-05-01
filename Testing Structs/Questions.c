
#include "Questions.h"

Text* createText(char *num,char *hint1,char *hint2,char *hint3,char *hint4, char *hint5,char *answer){
    Text *n = malloc(sizeof(Text));
    strcpy(n->num,num);
    strcpy(n->hint1,hint1);
    strcpy(n->hint2,hint2);
    strcpy(n->hint3,hint3);
    strcpy(n->hint4,hint4);
    strcpy(n->hint5,hint5);
    strcpy(n->answer,answer);

    
    return n;
}

void printText(Text* set){
    printf("%s\n",set->num);
    printf("%s\n",set->hint1);
    printf("%s\n",set->hint2);
    printf("%s\n",set->hint3);
    printf("%s\n",set->hint4);
    printf("%s\n",set->hint5);
    printf("%s\n",set->answer);
    

}

void freeText(Text* set){
    free(set);
}