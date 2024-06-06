#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if((x+y)%4 == 0 || (x*y)%4 == 0){
        printf("Y\n");
    }
    else{
        printf("N\n");
    }
}