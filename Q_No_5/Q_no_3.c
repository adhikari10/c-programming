#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(0));
    double a_rr[100],avg, sum = 0;  //assign the array average and sum to the decimal values
    int  i,  min = 1, max = 100;
    
    
    for(i = 0; i < 100; i++){ //Loop through 100 iterations to populate the array with random values and calculate the sum
        a_rr[i] = rand() % (max - min +1) + min; // generate random numbers
        sum += a_rr[i]; // add the sum 
        
    }
    avg = sum /100;
    printf("average = %.2f", avg);// calculate and print the sum 
   
    return 0;

}