#include "aritmatika.h"
#include <stdio.h>

int main(){
    char input[10];
    // scanf("%[^\n]", input);
    strcpy(input, "9423+*5/-");
    printf("%d\n", eval(input, strlen(input)));
    //put 23+ into input
    strcpy(input, "23+");
    printf("%d\n", eval(input, strlen(input)));
    return 0;
}