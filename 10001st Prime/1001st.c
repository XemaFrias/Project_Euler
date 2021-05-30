#include <stdio.h>
#include <math.h>

int is_prime(long aux){
    for (int i=2;i<=floor(sqrt(aux));i++){
        if(aux%i==0){
            return 0;
        }
    }
    //printf("%ld is prime\n",aux);
    return 1;
}


void main(){
    int counter=5;      //We start on the 6th prime to follow the descriptions
    long aux=13;
    long prime=13;
    int top_bound=10001;
    while (counter<top_bound){
        if(is_prime(aux)){
            counter++;
            prime=aux;
        }
        aux+=2;
    }
    printf(" The prime number %d is %ld\n",top_bound,prime);

//Implementar también con 6k+-1
}