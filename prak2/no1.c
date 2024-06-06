#include <stdio.h>
#include <limits.h>

int main(){
    int N, num;
    int highest=INT_MIN, second_highest=INT_MIN;

    scanf("%d", &N);
    if(N==1){
        scanf("%d", &num);
        printf("%d\n", num);
        return 0;
    }
    for(int i=0; i<N; i++){
        scanf("%d", &num);
        if(num==highest){
            highest = num;
        }
        else if(num>highest){
            second_highest = highest;
            highest = num;
        }
        else{
            if(num > second_highest){
                second_highest = num;
            }
        }
    }
    if(second_highest==INT_MIN){
        printf("%d", highest);
        return 0;
    }
    printf("%d\n", second_highest);
    return 0;
}
