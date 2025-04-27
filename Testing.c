#include <stdio.h>

void processArray(char *arr[], int size){
    for(int i = 0; i<size; i++){
        printf("%s\n",arr[i]);
    }
}


int main(){
    char *numbers[][1024]={"one","two","three","four","five"};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    processArray(numbers,size);

}