#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NUM_LISTS 10
#define PARTS 7

void readEasyFile(){
/* Puts all parts of a file into a list*/

    FILE* openFile = fopen("EasyFile.txt","r");

    char buffer[1024];
    char *List[NUM_LISTS][PARTS];

    //Puts each line of the file in each list.
    for(int i = 0; i<1;i++){
        for(int j = 0; j<7;j++){
                if(fgets(buffer,sizeof(buffer),openFile)!=NULL){
                    char *ptr = buffer + strlen(buffer) - 1;
                    //Trim Buffer
                    while(isspace(*ptr)) ptr--;
                    *(ptr+1)=0;
                    ptr = buffer;
                    while(isspace(*ptr)) ptr++;
                    }
                //Puts each buffer into the list
                List[i][j] = malloc(sizeof(buffer)+2);
                    strcpy(List[i][j],buffer);
            }
        }

////////////////////////////////////////////////////////////////////////
    /* Makes a new file with the first set moved down*/
    
    


    }
int main(){
    readEasyFile();
}