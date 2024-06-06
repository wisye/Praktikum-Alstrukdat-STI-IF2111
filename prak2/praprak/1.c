#include <stdio.h>
void space();
void star();

int main(){
    int x;
    int limit_space;
    int limit_star;

    scanf("%d", &x);
    if(x<=0){
        return 0;
    }

    limit_space = x-1;
    limit_star = 1;

    for(int i=0; i<=((x+x-1)/2); i++){
        for(int j=limit_space; j>0; j--){
            space();
        }
        for(int k=1; k<=limit_star; k++){
            star();
        }
        printf("\n");
        limit_space -= 1;
        limit_star += 2;
    }

    limit_star -= 1;

    for(int i=0; i<=((x+x-1)/2); i++){
        for(int j=0; j<=limit_space; j++){
            space();
        }
        for(int k=limit_star; k>1; k--){
            star();
        }
        printf("\n");
        limit_space += 1;
        limit_star -= 2;
    }

    return 0;
}

void space(){
    printf(" ");
}

void star(){
    printf("*");
}