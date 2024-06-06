#include "dividestack.h"
#include <stdio.h>

void divideStack(Stack *s, Stack *oddS, Stack *evenS){
    int X;
    // Stack temp;
    // CreateEmpty(&temp);

    // while(s->TOP > Nil){
    //     Pop(s, &X);
    //     Push(&temp, X);
    // }

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


// Stack temp;
// CreateEmpty(&temp);

// while(s->TOP > Nil){
//     Pop(s, &X);
//     Push(&temp, X);
// }

// while(temp.TOP > Nil){
//     if((temp.T[temp.TOP]) & 1){
//         Pop(&temp, &X);
//         Push(oddS, X);
//     }
//     else{
//         Pop(&temp, &X);
//         Push(evenS, X);
//     }
// }


/*
Memisahkan nilai genap dan nilai ganjil dari Stack s.
 
Awal:
s: 1,2,3,4
evenS:
oddS:

Akhir:
s: 
evenS 2,4
oddS: 1,3

Perhatikan order di dalam stacknya

*/