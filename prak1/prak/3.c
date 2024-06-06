#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    
    return 1;
}

int is_palindrome(int num) {
    int reversed = 0;
    int original = num;
    
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int x;
    scanf("%d", &x);
    
    if (x < 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int i = 0;
    int num = 1;

    while (i < x) {
        if (is_palindrome(num) && is_prime(num)) {
            i++;
        }
        num++;
    }

    printf("%d\n", num - 1);

    return 0;
}
