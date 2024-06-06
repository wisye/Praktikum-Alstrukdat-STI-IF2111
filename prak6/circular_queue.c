#include "circular_queue.h"
#include <stdio.h>

boolean IsEmpty (Queue Q){
    return (Q.idxHead == IDX_UNDEF && Q.idxTail == IDX_UNDEF);
}

boolean IsFull (Queue Q){
    return (Length(Q) == IDX_MAX + 1);
    // return (((Q.idxTail + 1) == Q.idxHead) || (Q.idxHead == 0 && Q.idxTail == IDX_MAX - 1));
}

int Length (Queue Q){
    if(IsEmpty(Q)){
        return 0;
    }
    else if (Q.idxTail >= Q.idxHead) {
        return (Q.idxTail - Q.idxHead + 1);
    } 
    else {
        return (((IDX_MAX + 1) - Q.idxHead) + Q.idxTail + 1);
    }
}

void CreateQueue (Queue * Q){
    (*Q).idxHead = IDX_UNDEF;
    (*Q).idxTail = IDX_UNDEF;
}

void enqueue (Queue * Q, ElType X){
    if (IsEmpty(*Q)) {
        (*Q).idxHead = 0;
        (*Q).idxTail = 0;
    } 
    else {
        (*Q).idxTail = ((*Q).idxTail + 1) % (IDX_MAX + 1);
    }
    (*Q).Tab[(*Q).idxTail] = X;
}

ElType dequeue (Queue * Q){
    ElType x = (*Q).Tab[(*Q).idxHead];
    if ((*Q).idxHead == (*Q).idxTail) {
        (*Q).idxHead = IDX_UNDEF;
        (*Q).idxTail = IDX_UNDEF;
    } 
    else {
        (*Q).idxHead = ((*Q).idxHead + 1) % (IDX_MAX + 1);
    }
    return x;
}

void displayQueue(Queue q){
    int i;
    if (IsEmpty(q)) {
        printf("[]\n");
    } 
    else {
        printf("[");
        if (q.idxHead <= q.idxTail) {
            for (i = q.idxHead; i <= q.idxTail; i++) {
                if (i == q.idxTail) {
                    printf("%d", q.Tab[i]);
                } else {
                    printf("%d,", q.Tab[i]);
                }
            }
        } else {
            for (i = q.idxHead; i < (IDX_MAX + 1); i++) {
                printf("%d,", q.Tab[i]);
            }
            for (i = 0; i <= q.idxTail; i++) {
                if (i == q.idxTail) {
                    printf("%d", q.Tab[i]);
                } else {
                    printf("%d,", q.Tab[i]);
                }
            }
        }
        printf("]\n");
    }
}
/* Proses : Menuliskan isi Queue dengan traversal dan mekanisme circular buffer;
/* Queue ditulis di antara kurung siku; antara dua elemen dipisahkan dengan separator "koma" */
/* I.S. q boleh kosong */
/* F.S. Jika q tidak kosong: [e1,e2,...,en] */
/* Contoh : jika ada tiga elemen bernilai 1, 20, 30 akan dicetak: [1,20,30] */
/* Jika Queue kosong : menulis [] */
/* Note: Output mengandung newline */
