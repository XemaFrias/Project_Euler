#include <stdio.h>
#include <math.h>

int isPrime(long number){
    for (int i=2;i<=sqrt(number);i++){
        if (number%i==0){
            return 0;
        }
    }
    return 1;
}

int main() { 
    long topBound=2000000;
    long result=0;
    for (int j=2;j<topBound;j++){
        if(isPrime(j)){
            result+=j;
        }
    }
    printf("The sum of Primes is %ld\n",result);

}

