#include <stdio.h>
#include <math.h>
int main() { 
    int number[20*20];
    int counter=1;
    long maxProduct=0;
    long auxProduct=1;
    FILE *myFile;
    myFile = fopen("grid", "r");    
    //Preparation of the file
    for (int i=0;i<20*20;i++){
        fscanf(myFile, "%2d", &number[i]);//We copy only 2 digit
    }
    //we start by searching below
    for(int i=0;i<20*20-3*20;i++){
        auxProduct=number[i]*number[i+20]*number[i+20*2]*number[i+20*3];
        if (auxProduct>maxProduct){
            maxProduct=auxProduct;
        }
    }
    //Searching up
    for(int i=3*20;i<20*20;i++){
        auxProduct=number[i]*number[i-20]*number[i-20*2]*number[i-20*3];
        if (auxProduct>maxProduct){
            maxProduct=auxProduct;
        }
    }
    //Searching left
    for(int i=4;i<20*20;i++){
        if(i%20!=0||(i-1)%20!=0 || (i-2)%20!=0|| (i-3)%20!=0){
            auxProduct=number[i]*number[i-1]*number[i-2]*number[i-3];
            if (auxProduct>maxProduct){
                maxProduct=auxProduct;
            }
        }
    }
    //Searching right
    for(int i=0;i<20*20;i++){
        if(i%20!=0||(i+1)%20!=0 || (i+2)%20!=0|| (i+3)%20!=0){
            auxProduct=number[i]*number[i+1]*number[i+2]*number[i+3];
            if (auxProduct>maxProduct){
                maxProduct=auxProduct;
            }
        }
    }/*
    //Searching Diagonal Right-Up
    for(int i=0;i<20*20;i++){
        if(i%20!=0||(i+1)%20!=0 || (i+2)%20!=0|| (i+3)%20!=0){
            auxProduct=number[i]*number[i+1]*number[i+2]*number[i+3];
            if (auxProduct>maxProduct){
                maxProduct=auxProduct;
            }
        }
    }*/
    printf("Max product is %ld\n",maxProduct);

}
