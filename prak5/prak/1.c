#include "mesinkata.h"


int main(){
    Word kata;
    scanf("%s", &kata);
    
    STARTWORD();

    int first = currentWord.Length;
    // printf("%d\n", first);
    
    // printf("%s\n", currentWord.TabWord);
    // printf("%d\n", currentWord.Length);
    while(currentChar != MARK){
        ADVWORD();
    }
    int last = currentWord.Length;
    int total = first + last;
    printf("%d\n", total);
    return 0;
}