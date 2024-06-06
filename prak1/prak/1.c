#include <stdio.h>

int main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int xy = (~(x-y)>>31|y)&((x-y)>>31|x);
    int xyz = (~(xy-z)>>31|z)&((xy-z)>>31|xy);
    printf("Diantara %d, %d, dan %d. Angka terbesar adalah %d\n", x, y,z, xyz);
}