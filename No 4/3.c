/*Write a program that asks for the students' exam scores (using integers 4 to 10) and 
calculates the average. The program must accept scores until entry is terminated by 
a negative integer. Finally, the program prints out the number of scores and the calculated
average with two decimal places of precision.*/




#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    // Declaration of variables
    int number_entered;      
    double average;           
    int count = 0, sum = 0;   // 'count' to track the number of scores entered, 
                              //'sum' to store the total of scores
    
    // Print information for the user about the program
    printf("The program calculates the average of scores you enter.\n");
    printf("End with a negative integer.\n");
    
    // Start of an infinite loop
    while(1) {
        // Prompt the user to enter a score
        printf("Enter score (4-10):");
        scanf("%d", &number_entered); // Read an integer score input from the user
        
        // Check if the entered number is negative
        if(number_entered < 0) {
            // If a negative score is entered, exit the loop and print the result
            printf("You entered %d scores.\n", count);    // Print how many valid scores were entered
            printf("Average score: %.2lf\n", (double)sum / count);   // Calculate and print the average
            
            break;   // Exit the loop
        }
        
        // If the entered score is non-negative, add it to the sum
        sum += number_entered;   // Add the entered score to the 'sum'
        
        // Increment the 'count' of how many scores have been entered
        count = count + 1;
    }
    
    return 0;   // Program ends successfully
}


