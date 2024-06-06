// #include <math.h>
#include <stdio.h>

int len(int n) {
  int length = 0;
  while (n != 0) {
    length++;
    n /= 10;
  }
  return length;
}

int power(int x, int len){
    int total=1;
    for(int i=0; i<len; i++){
        total *= x;
    }
    return total;
}

void solve(int left, int right) {
  for (int i = left; i <= right; i++) {
    int total = 0;
    int curr = i;
    while (curr > 0) {
      int lastdigit = curr % 10;
      total += power(lastdigit, len(i));
      curr /= 10;
    }

    if (total == i) {
      printf("%d\n", i);
    }
  }
}

int main() {
  int left, right;

  scanf("%d %d", &left, &right);
  solve(left, right);
  return 0;
}