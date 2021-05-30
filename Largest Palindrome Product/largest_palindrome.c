#include<stdio.h>
#include <math.h>

int is_palindrome(char text[6]){
    int size=6;
    char controlLeft;
    char controlRight;
    for (int i=0; i<=(size/2);i++){
        controlLeft=text[i];
        controlRight=text[size-1-i];
        if (controlRight!=controlLeft){
            return 0;
        }
    }
    return 1;
}



main(){
    int top_bound=999*999;
    int lower_bound=100*100;
    int top_palindrome;
    char text[6]; 
    top_palindrome=101; 
/*
    for (int i=top_bound;i>lower_bound;i--){ 
        sprintf(text, "%d", i);
        if(is_palindrome(text)){
            top_palindrome=i;
            printf("The largest palindrome is %d\n",top_palindrome);
            break;
        }
    }
*/  for (int i=999;i>100;i--){
        for(int j=999;j>100;j--){
            sprintf(text, "%d", i*j);
            if(is_palindrome(text)&&(i*j)>top_palindrome){
                top_palindrome=i*j;
                printf("The largest palindrome is %d\n",top_palindrome);
            }
        }
}


}