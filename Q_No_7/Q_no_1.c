#include <stdio.h>
#define size 5


void make_csv(char *filename,  int *arr){
    // to open and write a file
    FILE *file = fopen(filename, "w");
      
    // counts the numbers until the max is drawn 
    for(int i = 0; i < size; i++){
        // reads the file and put it in the array  
        fprintf(file, "%d", arr[i]);

        if(i < (size -1)){
            // the nubers inside of array are seperated by comma 
            fprintf(file, ",");

        }

    } fclose(file);// commad used to close the file and it is necessary to close the file

}
int main (){
    int a_rry[size], i;
    char fname[100];// initilizating the variables 
    printf("Enter the name of file (including extension) with you want to save with: ");
    scanf("%s", fname);
    printf("Enter %d numbers:\n", size);
    for(i = 0; i < size; i++){//create a forloop to store the number entered  by the user in array till max size
        scanf("%d", &a_rry[i]);
    }
    make_csv(fname, a_rry);//calling the function s
    printf("Save to the file %s\n", fname);
    return 0; 
    
}