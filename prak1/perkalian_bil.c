#include <stdio.h>

int main(){
    long long x;
    long long total = 1;
    long long total1;
    long long num = 0;
    scanf("%lld", &x);
    while(x != 0){
        if(x % 10 != 0){
            total *= (x % 10);            
        }
        x /= 10;
    }
    total1 = total;
    while(total1 != 0){
        if(total1 % 10 != 0){
            num += 1;
        }
        total1 /= 10;
    }
    printf("%lld %lld\n", total, num);
    return 0;
}