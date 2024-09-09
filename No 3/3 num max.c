

#include <stdio.h>
#include <stdlib.h>//this is for the 'rand' function
#include <time.h>// this is for the 'time' function

int main (){
    srand(time(0));
    int a, b, c, max_rand=10, min_rand=1;
    a = rand() % (max_rand - min_rand +1) +min_rand;
    b = rand() % (max_rand - min_rand +1) +min_rand;
    c = rand() % (max_rand - min_rand +1) +min_rand;
    
    if(a>b){
        if(a>c){
            printf("a is maximum");
        }else if(a==c){
            printf("a and c are maximum");
        }else{
            printf("c is greater");
                
        }
    }else if(a<b){
        if(b>c){
            printf("b is maximum");
        }else if(b == c){
            printf("b and c are maximum");
        }else{
            printf("c is maximum");
        }
    }else{//a = b
        if(a > c){
            printf("a is maximum");
        }else if(a == c){
            printf("a , b and c are maximum");
        }else{
            printf("c is maximum");
            
        }
    }
    printf("\nThe values are:\na = %d\nb = %d\nc = %d", a, b, c);
    return 0;
    
}