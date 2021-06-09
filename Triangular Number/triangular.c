#include <stdio.h>

long tau(long num) {

    long n = num;
    long i = 2;
    long p = 1;

    if (num == 1) return 1;

    while (i * i <= n) {
        long c = 1;
        while (n % i == 0) {
            n/= i;
            c++;
        }
        i++;
        p*= c;
    }

    if (n == num || n > 1)
        p*= 1 + 1;

    return p;
}

long solution(x) {

    long n = 1;
    long d = 1;

    while (tau(d) <= x) {
        n++;
        d+= n;
    }
    printf("The number is %ld\n",d);
    return d;
}

int main(){

    solution(500);
    int counter=0;
    long iterator=1;
    long number=(50000L*49999L)/2;
    while(1){
        number+=iterator;
        counter=0;
        for (int i=1;i<number;i++){
            if (number%i==0){
                counter++;
            }
        }
        printf("Llevamos %d\n",counter);
        if(counter>500){
            printf("The triangular number is %ld\n",number);
            break;
        }
        iterator++;
    }

}