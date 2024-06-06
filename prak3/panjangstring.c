#include <stdio.h>
#include "panjangstring.h"


// menerima argumen pointer kepada karakter pertama dari sebuah string yang panjangnya tidak diketahui
// dan memberikan output berupa panjang string tersebut, dengan batasan string input memiliki karakter
// '\0' pada akhir string
int panjangString(char *c){
    int i = 0;
    while (*c != '\0'){
        i++;
        c++;
    }
    return i;
}

// int main(){
//     char str[100];
//     int len =0;
//     scanf("%s^\0", &str);
//     len = panjangString(&str[0]);
//     printf("%d", len);
//     return 0;
// }
