#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 6
int main () {
    int min = -100, max = 100, sum = 0, i, value, a_rr[size];// initiliaze the variables and array
    srand(time(0));// use time for no replicating the value 
    for(i = 0; i < size; i ++){  //  initilize the value for 6 iterations 
        a_rr[i] = rand() % (max - min +1 ) + min; // get the random value in the interval if -100 to 100
        sum += a_rr[i]; // add the random value in each iterations 
        printf("%d\n", a_rr[i]) ; // print the outputted random values 
        
        

    }
    printf("sum = %d", sum);// print the calculated sum 



    return 0;

}