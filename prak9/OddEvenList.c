#include "OddEvenList.h"

void SortList(List *L){
    if(First(*L) == Nil || Next(First(*L)) == Nil)
        return;

    int swapped;
    do{
        swapped = 0;
        address P = First(*L);
        while(Next(P) != Nil){
            if(Info(P) > Info(Next(P))){
                infotype temp = Info(P);
                Info(P) = Info(Next(P));
                Info(Next(P)) = temp;
                swapped = 1;
            }
            P = Next(P);
        }
    }while(swapped);
}

void OddEvenList(List L, List *Odd, List *Even){
    CreateEmpty(Odd);
    CreateEmpty(Even);
    address P = First(L);
    while(P != Nil){
        if(Info(P) % 2 == 0){
            InsVLast(Even, Info(P));
        }
        else{
            InsVLast(Odd, Info(P));
        }
        P = Next(P);
    }
    SortList(Odd);
    SortList(Even);
}