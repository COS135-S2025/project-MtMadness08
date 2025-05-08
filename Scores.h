// 

#ifndef SCORES_H
#define SCORES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct Player{
    char *player;
    int score;
} Player;

Player* createPlayer(char *player, int score);

void freePlayer(Player* aPlayer);

void addPlayer(Player** List,Player* aPlayer,int *max_size,int* spaces);

void Players();

#endif