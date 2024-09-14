#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 100

// creating the minus_counter function to count the - numbers in the array
int minus_counter(int *a_func){
    int counter = 0, i;
    for(i = 0; i<size; i++){
        if(a_func[i] <0){// usingif coditional to determine the value inside the array is less than 0
        counter+=1; //  conting the -ve numbers
        }
    }return counter;// returning the total number of -ve value 
}



int main (){
    srand(time(0));
    int i, min = -100, max = 100, a_rray[size], counter;
    for(i = 0; i<size; i++){
        a_rray[i] = rand()% (max-min+1)+min;// crating random values in the given interval and assogning to the  integer arrays
        
    }
    counter = minus_counter(a_rray);// calling the minus_counter to return the value of -ve numbers
    printf("totoal no of -ve number = %d", counter);//  printing the -ve numbers
    
    return 0;


}