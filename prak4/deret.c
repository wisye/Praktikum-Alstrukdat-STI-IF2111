#include <stdio.h>
#include "deret.h"
#include <math.h>

int aritmatika(int a, int b, int n){
    return (a + (n-1)*b);
}

int geometri(int a, int r, int n){
    return (a*pow(r, (n-1)));
}

void deret_aritmatika(int a, int b, int n, int *result){
    int i, num=a;
    result[0] = a;
    for(i=1; i<n; i++){
        num += b;
        result[i] = num;
    }
}

void deret_geometri(int a, int r, int n, int *result){
    int i, num=a;
    result[0] = a;
    for(i=1; i<n; i++){
        num = num*r;
        result[i] = num;
    }
}

void segitiga_pascal(int n, int * result){
    int i, j, idx=0;
    for(i=n; i<=n; i++){
        int coef=1;
        for(j=1; j<=i; j++){
            result[idx] = coef;
            coef = coef * (i-j)/j;
            idx++;
        }
    }
}