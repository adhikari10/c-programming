#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(0));
    int arr_y[100], i, count = 0, max = 6, min = 1;
    for(i = 0; i<100; i++){
        arr_y[i] = rand() % (max - min + 1) + min;
        if(arr_y[i] == 1){
            count += 1;
        }
    
    
    }
    printf("Total number 1 obtained = %d", count);
    return 0;
}