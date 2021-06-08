#include <stdio.h>
#include <math.h>
int main() { 
    int number[1000];
    int counter=1;
    long maxProduct=0;
    long auxProduct=1;
    FILE *myFile;
    myFile = fopen("number", "r");    
    //Preparation of the file
    for (int i=0;i<1000;i++){
        fscanf(myFile, "%1d", &number[i]);//We copy only 1 digit
        printf("Number is: %d\n\n", number[i]);
    }
    //Npw we look for the biggest product
    for (int i=0;i<1000;i++){
        auxProduct=1;
        for (int j=i;j<13+i;j++){
            auxProduct*=number[j];
        }
        if(auxProduct>maxProduct){
            maxProduct=auxProduct;
            printf("New maximum %ld\n",maxProduct);
        }
    }    

}
            