/*Write a C program to manage student scores for three subjects by accepting the student's name and their scores, 
calculating the average score, and determining whether the student has passed or failed (with a passing average 
defined as 50 or above). The program should allow input for up to five students, store each student's name along 
with their pass/fail result in a CSV file named student_results.csv, and print the results to the console. Utilize 
loops for repeated data entry, conditional statements to evaluate pass/fail status, and user-defined functions to 
handle calculations and file writing.*/


#include <stdio.h>
#include <stdlib.h>

#define SIZE 5  // Maximum number of students

// Function to write results to a CSV file (name and result)
void write_to_csv(const char *filename, char names[][10], char results[], int count) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    // Write header
    fprintf(file, "Name,Result\n");
    
    // Write each student's name and result
    for (int i = 0; i < count; i++) {
        fprintf(file, "%s,%c\n", names[i], results[i]);
    }
    
    fclose(file);
}

// Function to calculate the average score and determine pass/fail status
void calculate_results(double scores[][3], char results[], int count) {
    for (int i = 0; i < count; i++) {
        double average = (scores[i][0] + scores[i][1] + scores[i][2]) / 3;
        if (average >= 50) {
            results[i] = 'P';  // Pass
        } else {
            results[i] = 'F';  // Fail
        }
    }
}

int main() {
    char names[SIZE][10];    // Array to store student names
    char results[SIZE];      // Array to store pass/fail results
    double scores[SIZE][3];  // Array to store scores for 3 subjects
    int student_count = 0;
    char choice;

    // Input student data in a loop
    do {
        if (student_count >= SIZE) {
            printf("Maximum number of students reached.\n");
            break;
        }

        // Input student name
        printf("Enter name for student %d: ", student_count + 1);
        scanf("%s", names[student_count]);

        // Input scores for 3 subjects
        for (int i = 0; i < 3; i++) {
            printf("Enter score for student %d, subject %d: ", student_count + 1, i + 1);
            scanf("%lf", &scores[student_count][i]);
        }

        student_count++;

        // Ask if the user wants to enter another student
        printf("Do you want to enter another student? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');

    // Calculate results
    calculate_results(scores, results, student_count);

    // Output results to CSV (name and pass/fail)
    write_to_csv("student_results.csv", names, results, student_count);

    // Print results to console
    printf("\nResults:\n");
    for (int i = 0; i < student_count; i++) {
        printf("Student: %s, Result: %c\n", names[i], results[i]);
    }

    return 0;
}
