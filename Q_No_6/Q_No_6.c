#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 100


int count_1(int *a_func){
   int counter = 0, i;
   for ( i = 0; i < size; i++)
   {
    if(a_func[i]==1){
        counter +=1;
    }
   }return counter;
   
}


int main () {
    srand(time(0));
    int min = 1, max = 6, dice_roll[size], i, counter;
    for(i = 0; i < size; i++){
        dice_roll[i] = rand()% (max -min +1) + min;
    }
    counter = count_1(dice_roll);
    printf("The total no of occurance of 1 is %d", counter);
    return 0;

}