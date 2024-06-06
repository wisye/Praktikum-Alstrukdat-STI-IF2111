#include "reverse.h"
#include "boolean.h"

void transferReverse(Queue* q1, Queue* q2){
    if (!IsEmpty(*q1)){
        ElType head = dequeue(q1);
        transferReverse(q1, q2);
        enqueue(q2, head);
    }


    // int i;
    // if((*q1).idxHead == (*q1).idxTail){
    //     enqueue((q2), (*q1).Tab[(*q1).idxHead]);
    // }
    // else if((*q1).idxHead < (*q1).idxTail){
    //     for(i = (*q1).idxTail; i>=(*q1).idxHead; i--){
    //         enqueue((q2), (*q1).Tab[i]);
    //     }
    // }
    // else{
    //     for(i=(*q1).idxTail; i>=0; i++){
    //         enqueue((q2), (*q1).Tab[i]);
    //     }
    //     for(i=IDX_MAX; i>=(*q1).idxHead; i--){
    //         enqueue((q2), (*q1).Tab[i]);
    //     }
    // }
    // (*q1).idxHead = IDX_UNDEF;
    // (*q1).idxTail = IDX_UNDEF;
}
// Proses: Memindahkan tiap elemen q1 ke q2 dengan urutan yang terbalik
// I.S.: q1 tidak kosong, q2 kosong. q1 dan q2 memiliki panjang yang sama
// F.S.: q1 kosong, q2 berisi elemen-elemen yang tadinya milik q1 dengan urutan yang terbalik
