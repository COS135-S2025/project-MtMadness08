#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Text{
    char num[20];
    char hint1[20];
    char hint2[20];
    char hint3[20];
    char hint4[20];
    char hint5[20];
    char answer[20];
}Text;

Text* createText(char *num,char *hint1,char *hint2,char *hint3,char *hint4, char *hint5,char *answer){

}

void freeText(Text* set){

}

void printText(Text* set){

}

#endif