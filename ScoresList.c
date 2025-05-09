#include "ScoresList.h"

// Creates the list

Scores *createScores()
{

    Scores *n = malloc(sizeof(Scores));

    n->num_spaces = 0;
    n->max_spaces = MAX_SPACES;

    n->players = malloc(sizeof(Player *) * (n->max_spaces));
};
// Frees the list

void freeScores(Scores *aScore)
{
    for (int i = 0; i < aScore->num_spaces; i++)
    {
        free(aScore->players[i]);
    };
    free(aScore->players);
    free(aScore);
};
// Adds a new player to the list

void addPlayer(Player *aPlayer, Scores *aScore)
{
    aScore->players[aScore->num_spaces] = aPlayer;
    aScore->num_spaces++;

    if (aScore->num_spaces == aScore->max_spaces)
    {
        aScore->max_spaces * 2;
        aScore->players = realloc(aScore->players, sizeof(Player *) * aScore->max_spaces);
    };
};
