#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 100
//creating a function average and access array elements through pointer '*'
int average(int *ar_func){
    int i, min = 0, max = 100, sum = 0, avg;//inilitizing the variables
    for(i =0; i<size; i++){
        ar_func[i] = rand()% (max-min+1)+min;// generating random value in the rane if min and max
        sum += ar_func[i]; //adding the obtined values form the array 
    }
    avg = sum / size;// calculating the average of the total value
    return avg;

}
int main (){
    srand(time(0));
    int a_rray[size], Average;

    Average = average(a_rray);// calling the average dunction so it can return the calculated avearge value 
    printf("Average = %d",Average);// printing the average value obtained form the function 
    return 0;

}