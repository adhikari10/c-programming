#include <stdio.h>
int main () {
    int age[10], i, error;//initilize the age in array ,i and the error.
    for(i = 0; i < 10; i++){//loop through the 10 iteration and ask the age in each iteration
        printf("Input age: ");//ask the user age
        scanf("%d", &age[i]); // store it in the array that is made
        if(age[i] <= 0 || age[i] > 100){//check if the user has enteres the age below 0 or over 100(error)
            error = 1;// error check
        }

    }if(error == 1){// i error is positive then 
        printf("\nInvalid age!!!");// print the error message 
        }
    return 0;
}
