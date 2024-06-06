#include "listsirkuler.h"
#include <stdio.h>

void deleteRR(List *l, infotype tQ) {
    if (IsEmpty(*l)) {
        printf("List kosong\n");
        return;
    }

    infotype processingTime;
    DelVLast(l, &processingTime);

    if (processingTime > tQ) {
        printf("%d\n", tQ);
        InsVFirst(l, processingTime - tQ);
    } else {
        printf("%d\n", processingTime);
    }
}

float average(List l) {
    if (IsEmpty(l)) {
        return 0.0;
    }

    address P = First(l);
    int sum = Info(P);
    int count = 1; 

    P = Next(P);

    while (P != First(l)) {
        sum += Info(P);
        count++;
        P = Next(P);
    }
    return (float)sum / count;
}



int main() {
    List l;
    infotype tQ, timeProcess;
    char code;

    CreateEmpty(&l);

    scanf("%d", &tQ);
    while (tQ <= 0){
        scanf("%d", &tQ);
    }
    while (true) {
        scanf(" %c", &code);

        if (code == 'A') {
            scanf("%d", &timeProcess);
            if (timeProcess > 0) {
                InsVFirst(&l, timeProcess);
            }
        } else if (code == 'D') {
            deleteRR(&l, tQ);
        } else if (code == 'F') {
            if (!IsEmpty(l)) {
                printf("%.2f\n", average(l));
            } else {
                printf("Proses selesai\n");
            }
            return 0;
        } else {
            printf("Kode salah\n");
        }
    }

    return 0;
}