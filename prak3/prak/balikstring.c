#include "balikstring.h"

int panjangString(char* ch){
    int i = 0;
    while(ch[i] != '\0'){
        i++;
    }
    return i;
}

void membalikString(char* str){
    int i = 0;
    int j = panjangString(str) - 1;
    char temp;
    while(i < j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
