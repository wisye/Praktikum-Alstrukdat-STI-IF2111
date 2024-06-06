#include <stdio.h>
#include "remove.h"

int main(){
    List L;
    CreateEmpty(&L);
    InsVLast(&L, 1);
    InsVLast(&L, 1);
    InsVLast(&L, 2);
    InsVLast(&L, 3);
    PrintInfo(L);
    RemoveDuplicates(&L);
    PrintInfo(L);
    return 0;
}