#include "hashmap.h"
/* Definisi HashMap M kosong : M.Count = Nil */
/* M.Count = jumlah element HashMap */
/* M.Elements = tempat penyimpanan element HashMap */

/* ********* Prototype ********* */

/* *** Konstruktor/Kreator *** */
void CreateEmpty(HashMap *M){
    int i=0;
    (*M).Count = Nil;
    while(i<MaxEl){
        (*M).Elements[i].Key = Undefined;
        (*M).Elements[i].Value = Undefined;
        i++;
    }
}
/* I.S. Sembarang */
/* F.S. Membuat sebuah HashMap M kosong berkapasitas MaxEl */
/* Ciri HashMap kosong : count bernilai Nil dengan seluruh isi key & value map Undefined */

/* *** Index Penyimpanan dengan modulo *** */
address Hash(keytype K){
    return K % MaxEl;
}
/* Menghasilkan indeks penyimpanan dengan operasi modulo ke MaxEl */

/* ********** Operator Dasar HashMap ********* */
valuetype Value(HashMap M, keytype k){
    valuetype val = Undefined;
    address idx = Hash(k);
    boolean found=false;
    while (!found && M.Elements[idx].Key!=Undefined){
        if (M.Elements[idx].Key==k){
            found = true;
            val = M.Elements[idx].Value;
        }
        idx = (idx+1)%MaxEl;
    }
    return val;
}
/* Mengembalikan nilai value dengan key k dari M */
/* Jika tidak ada key k pada M, akan mengembalikan Undefined */

void Insert(HashMap *M, keytype k, valuetype v){
    address idx = Hash(k);
    if (M->Elements[idx].Key !=Undefined){
        boolean same = false;
        while (!same && M->Elements[idx].Key!=Undefined){
            if (M->Elements[idx].Key==k){
                same = true;
            }
            idx = (idx+1) % MaxEl;
        }
        if(!same){
            M->Elements[idx].Key =k;
            M->Elements[idx].Value = v;
            M->Count++;
        }

    }
    else {
        M->Elements[idx].Value = v;
        M->Elements[idx].Key =k;
        M->Count ++;
    }
}
/* Menambahkan Elmt sebagai elemen HashMap M. */
/* I.S. M mungkin kosong, M tidak penuh
        M mungkin sudah beranggotakan v dengan key k */
/* F.S. v menjadi anggota dari M dengan key k. Jika k sudah ada, operasi tidak dilakukan 
        index yang digunakan untuk menyimpan v adalah hash dari k
        gunakan open addressing linear probing dengan interval 1 jika index sudah terisi    */
