#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10


int count_x(int *a_func){
    int i, num, counter = 0;
    printf("Choose the value of which you want to count between(1-6): ");
    if(scanf("%d", &num) < 1 || num > 6){
        printf("invalid input!");
        return -1;
    }
    for(i = 0; i<size; i++){
        if(a_func[i] == num){
            counter += 1;
        }
    }return counter; 
}



int main (){
    srand(time(0));
    int a_rry[size], i, min = 1, max = 6, count;
    for(i = 0; i <size; i++){
        a_rry[i] =  rand()% (max-min+1)+min;
    
    }
    count = count_x(a_rry);
    if(count != -1){
        printf("Total no if occurance = %d", count);
    
    }return 0;



}