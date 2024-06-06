#include <stdio.h>
#include <math.h>

int main(){
    int list[] = {1,2,3,4,5,6,7,8,9};

    int x = 3;
    int i = 1;
    int j = 9;

    while (i<j-1) {
        int l = floor((i+j)/3);
        int u = floor(2*(i+j)/3);
        if (x>list[u]){
            i = u +1;
        }
        else if (x>list[l]){
            i = l+1;
            j = u;
        }
        else{
            j = l;
        }
    }
    if (x=list[i]){
        printf("%d\n", i);
    }
    else if (x=list[j]){
        printf("%d\n", j);
    }
    else{
        printf("not found\n");
    }


    return 0;
}