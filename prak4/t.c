#include <stdio.h>

void add(int *x){
    *x = *x + 5 ;
}

int main(){
    int a;
    scanf("%d", &a);
    add(&a);
    printf("%d", a);
    return 0;
}