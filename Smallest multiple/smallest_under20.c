#include <stdio.h>
main(){
    //2520=2*2*2*3*3*5*7
    //Elevations of the different primes until they reach 10
    int top_bound=20;
    int primes[8][2]={{2,0},{3,0},{5,0},{7,0},{11,0},{13,0},{17,0},{19,0}}; //In another file find way to automatize this
    //we prepare the array
    for (int i=0; i<8;i++){
        int number=primes[i][0];
        while (top_bound>number){ //Elevations of each prime until it reaches the top bound
            primes[i][1]++;
            number=number*primes[i][0];
        }
    }
    //We multiply the array
    long result=1;
    for (int i=0; i<8;i++){
        for (int j=0;j<primes[i][1];j++){
            result=result*primes[i][0];
        }
        printf("Prime %d is present %d times\n",i,primes[i][1]);
    }
    printf("The smallest multiple under %d is %ld\n",top_bound,result);

    
}