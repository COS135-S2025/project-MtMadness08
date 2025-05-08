// 

#ifndef SCORES_H
#define SCORES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_NAME 1024

typedef struct Player{
    char player[MAX_NAME];
    int score;
} Player;

Player* createPlayer(char *player, int score);

void freePlayer(Player* aPlayer);

void printPlayer(Player* aPlayer);

void Players();

#endif