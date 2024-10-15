#include <stdio.h>
#include <math.h>
#define size 3

void change_arr_val(int*pointer){
    for(int i = 0; i< size; i++){
        *pointer = 0;
        pointer +=1;
        
    }
    
}

int main (){
    int a[size] = {1, 2, 3};
    //change the value of array using the pointer
    change_arr_val(a);
    
    for(int i = 0; i<size; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
}