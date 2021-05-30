#include <stdio.h>
#include <math.h>
int main() { 
long largest_prime=0;
int chekcer=0;
long number=floor(sqrt(600851475143)); //Marks Top Boundary 
for(long ii=13;ii<number;ii+=2){
    printf ("%ld\n",ii);
    if (600851475143%ii==0){        //Use Original number
        chekcer=1;
        for (long j=2;j<ii;j++){
            if (ii%j==0){
                chekcer=0;
                break;
            }
        }
        if (chekcer){
            largest_prime=ii;
        }
            
     }
        
}
printf ("The largest prime is %ld\n",largest_prime);       

}
            