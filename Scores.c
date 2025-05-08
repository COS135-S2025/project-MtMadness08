//

#include "Scores.h"

Player* createPlayer(char *player, int score)
{

    Player *n = malloc(sizeof(Player));
    strcpy(n->score, score);

}


void freePlayer(Player *aPlayer)
{
    free(aPlayer->player);
    free(aPlayer);

}

void printPlayer(Player* aPlayer){
    printf("%s:%d\n",aPlayer->player,aPlayer->score);
}