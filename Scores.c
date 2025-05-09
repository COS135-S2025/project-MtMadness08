// Creates a new player struct to count each new player

#include "Scores.h"

// Creates the player

Player *createPlayer(char *player)
{

    Player *n = malloc(sizeof(Player));
    strcpy(n->player, player);
}

// Frees the player

void freePlayer(Player *aPlayer)
{
    free(aPlayer->player);
    free(aPlayer);
}

// prints the player
void printPlayer(Player *aPlayer)
{
    printf("%s\n", aPlayer->player);
}