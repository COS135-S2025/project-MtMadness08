//

#include "Scores.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE

Player *createPlayer(char *player, int score)
{

    Player *n = malloc(sizeof(Player));

    n->player = player;
    n->score = 0;
}

void freePlayer(Player *aPlayer)
{
    free(aPlayer->player);
    free(aPlayer);

}

void addPlayer(Player** List,Player* aPlayer,int *max_size, int* spaces)
{
    if(*spaces==*max_size){
        *max_size=*max_size*2;
    }

}