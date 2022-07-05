#include <stdio.h>

int fib(int);

int main(){    

    // 0,1,1,2,3,5,8,13,21,34...
    int fibAns = fib(10);
    printf("Fib: %d\n", fibAns);
    
    return 0;
}

int fib(int n){
    if (n <= 1){
        return 0;
    }
    if (n <= 3){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
