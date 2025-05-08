#include "ScoresList.h"

    //Creates the bookshelf 

Scores* createScores(){

    Scores *n = malloc(sizeof(Scores));
    n -> players = malloc(sizeof(Player*)* (n -> max_spaces));

    n -> num_spaces = 0;
    n -> max_spaces = MAX_SPACES;

};
    //Frees the bookshelf

void freePlayer(Scores* aScore){
    for(int i=0; i < aScore -> num_spaces; i++){
        free(aScore->players[i]);};
    free(aScore->players);
    free(aScore);
};
    //Adds a book to the bookshelf

void addPlayer(Player *aPlayer, Scores *aScore){
    aScore -> players[aScore->num_spaces] = aPlayer;
    aScore->num_spaces++;

    
    if(aScore->num_spaces == aScore-> max_spaces){
        aScore -> max_spaces*2;
        aScore->players = realloc(aScore->players,sizeof(Player*)*aScore->max_spaces);
    };
};

