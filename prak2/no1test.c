#include <stdio.h>

int main(){
	int N, temp, num;
    int arr[100];
    int highest=-9999, second_highest=-9999;

    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%d", &num);
        arr[i] = num;
    }

    printf("%d", arr);
    for(int i=0; i<=N; i++){
        for(int j=0; j<=N; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }
        }
    }

    second_highest = arr[1];
    printf("%d\n", arr);
    return 0;
}