
#include <stdio.h>
#include <math.h>

void main(){
    int top_bound=100;
    //First we use gauss therem to found the sum of the first 100 numbers
    long basic_sum= (top_bound*(top_bound+1))/2;
    //we then square it
    basic_sum= basic_sum*basic_sum;

    long square_sum=0;
    for (int i=1;i<= top_bound;i++){ //we could have use ((2n+1)*(n+1)*n)/6
        square_sum+=i*i;
    }

    long result= basic_sum-square_sum;
    printf("The difference is %ld\n",result);

}