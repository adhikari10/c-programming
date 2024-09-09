
#include <stdio.h>
int main() {
    int input_num;
    int total_num = 0;// its initilize that the total_num to 0

    while (1) {//infinite loop, since 1 is always true
        printf("Input number = ");
        scanf("%d", &input_num);//ask user to input number and store the inputed
                                    //value in input_num
        total_num = total_num + input_num; // add the inputted number to total_num to update the running total
        printf("Now total = %d \n", total_num);// prints the updated total
        printf("---------------\n");
    }
    //No break statement, so the loop will continue indefinitely
    return 0;
}