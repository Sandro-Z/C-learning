#include <stdio.h>
int main(){
    int prime_num=67;
    int i;
    int is_prime = 1; // Assume prime_num is prime until proven otherwise
    for(i=2;i<prime_num;i++){
        if (prime_num%i==0){
            printf("%d不是素数\n", prime_num);
            is_prime = 0; // Set flag to false if a divisor is found
            break; 
        }
    }
    if (is_prime!=0){
        printf("%d是素数\n", prime_num);
    }
    return 0;
}