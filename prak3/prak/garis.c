#include "garis.h"
#include <stdio.h>

void MakeGARIS (POINT P1, POINT P2, GARIS * L){
    L->PAw = P1;
    L->PAkh = P2;
}

void BacaGARIS (GARIS * L){
    POINT P1, P2;
    BacaPOINT(&P1);
    BacaPOINT(&P2);
    while(EQ(P1, P2)){
        printf("Garis tidak valid\n");
        BacaPOINT(&P1);
        BacaPOINT(&P2);
    }
    MakeGARIS(P1, P2, L);
}

void TulisGARIS (GARIS L){
    printf("(");
    TulisPOINT(L.PAw);
    printf(",");
    TulisPOINT(L.PAkh);
    printf(")");
}

float PanjangGARIS (GARIS L){
    return Panjang(L.PAw, L.PAkh);
}

float Gradien (GARIS L){
    return (float)(Ordinat(L.PAkh) - Ordinat(L.PAw)) / (float)(Absis(L.PAkh) - Absis(L.PAw));
}

boolean IsTegakLurus (GARIS L1, GARIS L2){
    return (Gradien(L1) * Gradien(L2) == -1);
}

boolean IsSejajar (GARIS L1, GARIS L2){
    return (Gradien(L1) == Gradien(L2));
}