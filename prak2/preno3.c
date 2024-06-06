#include <stdio.h>

int main(){
    int x;
    int num;
    int counter=0;
    int total=0;

    scanf("%d", &x);

    for(int i=0; i<x; i++){
        scanf("%d", &num);
        while(num != 0){
            num /= 10;
            counter++;
        }
        if(counter%2 == 0){
            total++;
        }
        counter = 0;
    }
    printf("%d\n", total);
    return 0;
}