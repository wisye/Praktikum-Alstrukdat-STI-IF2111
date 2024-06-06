#include "arraydin.h"
#include <stdlib.h>

ArrayDin MakeArrayDin(){
    ArrayDin arr;
    while(arr.A == NULL){
        arr.A = (ElType*)malloc(InitialSize*sizeof(ElType));
    }
    arr.Capacity = InitialSize;
    arr.Neff = 0;
    return arr;
}

void DeallocateArrayDin(ArrayDin *array){
    free((*array).A);
    (*array).Capacity = 0;
    (*array).Neff = 0;
}

boolean IsEmpty(ArrayDin array){
    return (array.Neff == 0);
}

int Length(ArrayDin array){
    return array.Neff;
}

ElType Get(ArrayDin array, IdxType i){
    return array.A[i];
}

int GetCapacity(ArrayDin array){
    return array.Capacity;
}

void InsertAt(ArrayDin *array, ElType el, IdxType i){
    for(int idx=Length(*array); i<idx; idx--){
        (*array).A[idx] = (*array).A[idx-1];
    }   
    (*array).A[i] = el;
    (*array).Neff++;
}

void DeleteAt(ArrayDin *array, IdxType i){
    for(int idx=i; idx<Length(*array); idx++){
        (*array).A[idx] = (*array).A[idx+1];
    }
    (*array).Neff--;
}
