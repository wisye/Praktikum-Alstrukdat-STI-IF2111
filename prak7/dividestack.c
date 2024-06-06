#include "dividestack.h"

void divideStack(Stack *s, Stack *oddS, Stack *evenS){
    int X;
    Pop(s, &X);

    if(!IsEmpty(*s)){
        divideStack(s, oddS, evenS);
    }
    if(X & 1){
        Push(oddS, X);
    }
    else{
        Push(evenS, X);
    }
}