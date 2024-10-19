#include <stdio.h>
#define size 5
// Making function to calculate the BMI
double calc_BMI(double weight, double height){
    double BMI = weight / (height * height);
    return BMI;
}


//void function to creat a integer file  
void csv_int(char *filename, int *arr){
    FILE *file = fopen(filename, "w");

    for(int i =0; i<size; i++){
        fprintf(file, "%d", arr[i]);
        if(i<(size-1)){
            fprintf(file, "\n");
        }
    }fclose(file);

}


//void function to create a real number array file
void csv_double(char *filename, double *arr){
    FILE *file = fopen(filename, "w");

    for(int i=0; i<size; i++){
        fprintf(file, "%lf", arr[i]);
        if(i<(size-1)){
            fprintf(file, "\n");

        }
    }fclose(file);
}

//void function to creat a  character array file
void csv_char(char *filename, char *arr){
    FILE *file = fopen(filename, "w");

    for(int i=0; i<size; i++){
        fprintf(file, "%c", arr[i]);
        if(i<(size-1)){
            fprintf(file, "\n");

        }
    }fclose(file);
}

//void function to creat a single character array file
void csv_string(char *filename, char arr[size][10]) {
    FILE *file = fopen(filename, "w");
    for(int i = 0; i < size; i++) {
        fprintf(file, "%s", arr[i]);
        if(i < (size - 1)) {
            fprintf(file, "\n");
        }
    }
    fclose(file);
}


int main (){

    //initilizing the array variables 
    char f_name[size][10], l_name[size][10], gender[size];
    int age[size], i, count_BMI= 0,count_m= 0, count_f= 0;
    double weight[size], height[size], BMI[size], T_BMI=0, avergae;
    for(i=0; i<size; i++){
        printf("Enter first name: ");
        scanf("%s", f_name[i]);
        printf("Enter last name: ");
        scanf("%s", l_name[i]);
        printf("Enter gender(M/F): ");
        scanf(" %c", &gender[i]);// used %c to capture single character for gender
        printf("Enter age: ");
        scanf("%d", &age[i]);
        printf("Enter height (in meters): ");
        scanf("%lf", &height[i]);
        printf("Enter weight (in kg): ");
        scanf("%lf", &weight[i]);

        printf("\n*********************************************\n");

        // Calculates BMI foe the current person 
        BMI[i] = calc_BMI(weight[i], height[i]);
        T_BMI += BMI[i];// Add BMI total

        //Check if BMI is over 25
        if(BMI[i] > 25){
            count_BMI+=1;
        }
        
        //counts the male and female according to the gender input
        if(gender[i] == 'M' || gender[i] =='m'){
            count_m+=1;

        } else if(gender[i] == 'f' || gender[i] == 'F'){
            count_f+=1;
        } else{
            printf("Invalid gender input!\n");
        }
            
        
    }


    printf("The average of BMI is %.2lf \n", T_BMI / i);
    if(count_BMI>0){
        printf("The number of person who is over 25 BMI: %d\n", count_BMI);
    }
    if(count_m>0){
        printf("The number of male: %d\n", count_m);
    }
    if(count_f>0){
        printf("The number of female is: %d\n", count_f);
    }
    

    //calling the respective function with the given filename and creating the file for each array.
    csv_string("first_name.csv", f_name);
    csv_string("last_name.csv", l_name);
    csv_int("age.csv", age);
    csv_char("gender.csv", gender);
    csv_double("height.csv", height);
    csv_double("weight.csv", weight);
    csv_double("BMI.csv", BMI);



    return 0;
}