#include <stdio.h>
#include <limits.h>
#include "array.h"

void MakeEmpty (TabInt *T){
    (*T).Neff = 0;
}

int NbElmt (TabInt T){
    return T.Neff;
}

int MaxNbEl (TabInt T){
    return (IdxMax-IdxMin+1);
}

IdxType GetFirstIdx (TabInt T){
    return IdxMin;
}

IdxType GetLastIdx (TabInt T){
    return T.Neff;
}

ElType GetElmt (TabInt T, IdxType i){
    return T.TI[i];
}

void SetTab (TabInt Tin, TabInt *Tout){
    *Tout = Tin;
}

void SetEl (TabInt *T, IdxType i, ElType v){
    (*T).TI[i] = v;
    if(i>(*T).Neff){
        (*T).Neff++;
    }
}

void SetNeff (TabInt *T, IdxType N){
    (*T).Neff = N;
}

boolean IsIdxValid (TabInt T, IdxType i){
    return ((i >= IdxMin) && (i <= IdxMax)); 
}

boolean IsIdxEff (TabInt T, IdxType i){
    return ((IdxMin <= i) && (i <= T.Neff));
}

boolean IsEmpty (TabInt T){
    return T.Neff == 0;
}

boolean IsFull (TabInt T){
    return T.Neff == IdxMax-IdxMin+1;
}

void TulisIsi (TabInt T){
    if(T.Neff == 0){
        printf("Tabel kosong\n");
    }
    else{
        int i;
        for(i=IdxMin; i<=T.Neff; i++){
            printf("%d:%d\n", i, T.TI[i]);
        }
    }
}

TabInt PlusTab (TabInt T1, TabInt T2){
    int i;
    for(i=IdxMin; i<=T1.Neff; i++){
        T1.TI[i] += T2.TI[i];
    }
    return T1;
}

TabInt MinusTab (TabInt T1, TabInt T2){
    int i;
    for(i=IdxMin; i<=T1.Neff; i++){
        T1.TI[i] -= T2.TI[i];
    }
    return T1;
}

ElType ValMax (TabInt T){
    int i;
    int max = INT_MIN;
    for(i=IdxMin; i<=T.Neff; i++){
        if(T.TI[i] >= max){
            max = T.TI[i];
        }
    }
    return max;
}

ElType ValMin (TabInt T){
    int i;
    int min = INT_MAX;
    for(i=IdxMin; i<=T.Neff; i++){
        if(T.TI[i] <= min){
            min = T.TI[i];
        }
    }
    return min;
}

IdxType IdxMaxTab (TabInt T){
    int i;
    int max = ValMax(T);
    for(i=IdxMin; i<=T.Neff; i++){
        if(T.TI[i] == max){
            return i;
        }
    }
}

IdxType IdxMinTab (TabInt T){
    int i;
    int min = ValMin(T);
    for(i=IdxMin; i<=T.Neff; i++){
        if(T.TI[i] == min){
            return i;
        }
    }
}