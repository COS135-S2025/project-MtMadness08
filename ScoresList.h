// 

#ifndef SCORESLIST_H
#define SCORESLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "Scores.h"

#define MAX_SPACES 2

typedef struct Scores{
    struct Player** players;
    int max_spaces;
    int num_spaces;
} Scores;

Scores* createScores();

void freePlayer(Scores* aScore);

void addPlayer(Player* aPlayer, Scores* aScores);


#endif