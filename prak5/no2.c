#include "mesinkarakter.h"
#include <string.h>

int main(){
    char exc;
    int count = 0;
    scanf("%c", &exc);
    START();
    while (!IsEOP()){
        if(((GetCC() == 'a') || (GetCC() == 'i') || (GetCC() == 'u') || (GetCC() == 'e') || (GetCC() == 'o')) && (GetCC() != exc)){
            printf("%c", GetCC());
            count++;
        }
        ADV();
    }
    if (count == 0){
        printf("0\n");
    }
    else{
        printf(" %d\n", count);
    }
    return 0;

}