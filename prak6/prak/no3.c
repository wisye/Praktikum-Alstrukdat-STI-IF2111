#include <stdio.h>
#include "circular_queue.h"

void fun1(Queue q, int x){
    if(!IsEmpty(q)){
        printf("Putar lagu %d\n", x);
    }
    else{
        printf("Tidak ada lagu\n");
    }
}

void fun2(boolean *x, Queue *q, int id){
    if(!(*x)){
        printf("Looping lagu\n");
        (*x) = true;
    }
    else{
        printf("Tidak looping lagu\n");
        (*x) = false;
        enqueue(q, id);
    }
}

void fun3(Queue *q, int x){
    enqueue(q, x);
}

void fun4(Queue *q1, Queue *q2, int x){
    int i;
    for(i=3*x; i<=(3*x + 3); i++){
        enqueue(q2, (*q1).Tab[(*q1).idxHead + i]);
    }
}

int main(){
    int N, M, i, x, y, z;
    int start = 1, com, ids = 0, idp = 0;
    boolean loop = false;
    Queue playlist, q;
    CreateQueue(&playlist);
    CreateQueue(&q);
    scanf("%d %d", &N, &M);
    for(i=0; i<M; i++){
        scanf("%d %d %d", &x, &y, &z);
        if((x < 0) || (x > N-1) || (y < 0) || (y > N-1) || (z < 0) || (z > N-1)){
            return 0;
        }
        enqueue(&playlist, x);
        enqueue(&playlist, y);
        enqueue(&playlist, z);
    }
    // displayQueue(playlist);

    while(start != 0){
        scanf("%d", &com);
        if(com == 0){
            start = 0;
        }
        else if(com == 1){
            if(!loop){
                ids = dequeue(&q);
                fun1(q, ids);
            }
            else{
                fun1(q, ids);
            }
        }
        else if(com == 2){
            fun2(&loop, &q, ids);
        }
        else if(com == 3){
            scanf("%d", &ids);
            fun3(&q, ids);
        }
        else if(com == 4){
            scanf("%d", &idp);
            fun4(&playlist, &q, idp);
        }
    }
    return 0;
}