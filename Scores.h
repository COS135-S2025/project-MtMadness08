// Creates all the functions to make a new player

#ifndef SCORES_H
#define SCORES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_NAME 1024

typedef struct Player{
    char player[MAX_NAME];
} Player;

Player* createPlayer(char *player);

void freePlayer(Player* aPlayer);

void printPlayer(Player* aPlayer);

#endif