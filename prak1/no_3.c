#include <stdio.h>

int main (){
    int x, num_rev, num_temp, prime, check;
    int i=2;
    int num=5;
    scanf("%d", &x);
    if(x == 1){
        printf("2\n");
    }
    else if(x==2){
        printf("3\n");
    }
    else{
        while (i <= x){
            num_temp = num;
            num_rev = num_temp;
            prime = 0;
            while(num_temp != 0){
                num_rev = (num_rev * 10) + (num_temp % 10);
                num_temp /= 10;
            }
            if (num_rev == num){
                for(check = 2;check <= num / 2;check++){
                    if(num % check == 0){
                        prime += 1;
                    }
                }
            }
            if (prime == 0){
                i += 1;
            }
            num += 1;
        }
        printf("%d\n", num);
    }
    return 0;
}