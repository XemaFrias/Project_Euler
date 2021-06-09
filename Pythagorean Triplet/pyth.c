#include <stdio.h>
#include <math.h>

int pythagoras(int topBound){
    //a<b<c
    for (int a=0;a<topBound/3;a++){//If a is bigger than /3 there wouldnt be space for the other 2
        for(int b=0;b<topBound/2;b++){//Same goes for b. It is in the middle so if its bigger it wouldnt let space for c
            int c=topBound-a-b;
            if(a*a + b*b == c*c){
                printf("The triple is a=%d b=%d c=%d\n",a,b,c);
                printf("The result of the multiplication is %d\n",a*b*c);
                return a*b*c;
            }
        }
    } 
    printf("There is no triplet under this circunstances\n");   
return -1;
}
int main() { 
    int topBound=1000;
    int control=pythagoras(topBound);
}
