#include <stdio.h>
#include <math.h>
#define size 1000

void make_csv(char *filename, double *arry){
    FILE *file = fopen(filename, "w");
    
    for(int i =0; i<size; i++){
        fprintf(file, "%lf", arry[i]);
        if(i<(size-1)){
            fprintf(file, "\n");
        }
    }fclose(file);
}


int main(){
    double input_x[size], output_y[size];
    int i;
    for(i = 0; i<size; i++){
        input_x[i] = 0.1 * i;
        
    }
    
    for(i = 0; i<size; i++){
        output_y[i] = sin(input_x[i]) + 0.1 * input_x[i];
        
    }
    make_csv("sin1_function.csv", output_y);
    
    
    return 0;
}
