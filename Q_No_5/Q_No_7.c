#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int arr_y[100],i, c_1 = 0, c_2=0, c_3=0, c_4=0, c_5=0, c_6=0;
    int min = 1, max = 6;
    for(i=0; i<100; i++){
        arr_y[i] = rand() % (max-min+1) +min;
        if(arr_y[i] == 1){
            c_1 += 1;
        }else if (arr_y[i] == 2){
            c_2 += 1;
        }else if(arr_y[i]==3){
            c_3 += 1;
        }else if(arr_y[i] == 4){
            c_4 += 1;
        }else if (arr_y[i] == 5)
        {
            c_5 += 1;
        }else if (arr_y[i]== 6)
        {
            c_6 += 1;
        }
        
    }
    printf("1: %d times\n", c_1);
    printf("2: %d times\n", c_2);
    printf("3: %d times\n", c_3);
    printf("4: %d times\n", c_4);
    printf("5: %d times\n", c_5);
    printf("6: %d times\n", c_6);
    printf("Total = %d times",c_1+c_2+c_3+c_4+c_5+c_6);



    return 0;
    


}