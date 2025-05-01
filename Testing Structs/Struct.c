
#include "Struct.h"

Structs* createArray(int num){ //Creates the array
    Structs* n = malloc(sizeof(Structs));
    n -> num_questions = 0;
    n -> Text = malloc(sizeof(Text*));
    return n;
}

void freeArray(Structs* aStruct){ //Frees the array
    for(int i = 0; i < aStruct->num_questions; i++){
        free(aStruct->Text[i]);
    }
    free(aStruct->num_questions);
    free(aStruct);
}

void addSet(Text* set, Structs* aStruct){ //Adds the set
    aStruct->Text[aStruct->num_questions]=set;
}