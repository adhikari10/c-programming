#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(0));// setting this for not have the same random numbers all the time 
    int arr_y[100], i, count = 0, max = 6, min = 1;//initilize the variables 
    for(i = 0; i<100; i++){// creating loop till 100 iteratiions
        arr_y[i] = rand() % (max - min + 1) + min;// get the random number in the interval of min and the max
        if(arr_y[i] == 1){//checking if the random value is 1
            count += 1;// counting if the value is 1 
        }
    
    
    }
    printf("Total number 1 obtained = %d", count);// printing the obtaines vlaue by counting
    return 0;
}