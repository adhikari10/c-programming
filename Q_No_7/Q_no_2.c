#include <stdio.h>
#define size 5

void double_csv(char *filename, double *arr){
    
    // to open a file 
    FILE *file = fopen(filename, "w");

    for(int i = 0; i <size; i++){
        fprintf(file, "%lf", arr[i]);
        if(i<(size-1)){
            fprintf(file, "\n");
        }
    }fclose(file);

}

int main (){
    double a_rr[size];
    int i;
    printf("Enter the numbers:");
    for(i=0; i<size; i++){
        scanf("%lf", &a_rr[i]);
    }
    double_csv("double.csv", a_rr);
    return 0;
}