#include <stdio.h>

int sum(int);

int main(){
    int sumAns = sum(100);
    printf("Sum: %d\n", sumAns);
  
    return 0;
}

int sum(int n) {
    if (n <= 0){
        return 0;
    }
    return n + sum(n - 1);
}
