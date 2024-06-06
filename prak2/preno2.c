#include <stdio.h>

int main(){
    char arr[100];
    int counter = 0;
    scanf("%[^\n]c", arr);
    
    for(int i=0; i<=sizeof(arr); i++){
        if(arr[i] == ' '){
            counter += 1;
        }
    }

    printf("%d\n", counter+1);

    return 0;
}
