#include <stdio.h>

int factorial(int);

int main(){
    
    int facAns = factorial(23);
    printf("Factorial: %d\n", facAns);
  
    return 0;
}

int factorial(int n){
    if (n <= 1){
        return 1;
    }
    return n * factorial(n - 1);
}
