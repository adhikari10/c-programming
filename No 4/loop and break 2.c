
#include <stdio.h>
int main() {
    int input_num;
    int total_num = 0;

    while (1) {
        printf("Input number = ");
        scanf("%d", &input_num);
        if(input_num != 0){
            total_num = total_num + input_num;
            printf("Now total = %d \n", total_num);
            printf("---------------\n");
        }else{
            printf("---------------\n");
            break;
        }
    }

    return 0;
}