#include "remove.h"
#include <stdio.h>
#include <stdlib.h>

void RemoveDuplicates(List *L){
    address P = First(*L);
    while(P != Nil){
        address temp;
        address Q = P;
        while(Next(Q) != Nil){
            if(Info(Next(Q)) == Info(P)){
                DelAfter(L, &temp, Q);
                Dealokasi(&temp);
            }
            else{
                Q = Next(Q);
            }
        }
        P = Next(P);
    }
}
/*
I.S. Variable L sudah terisi dengan nilai
Melakukan penghapusan apabila terdapat nilai yang sama

Contoh:
Input: [1,1,2,3]
Output: [1,2,3]

Input: [1,2,3,1]
Output: [1,2,3]
*/