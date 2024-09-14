#include <stdio.h>
int main (){
    int a_rr[5], i;
    for(i = 0; i < 5; i++){
        printf("Input Number: ");
        scanf("%d", &a_rr[i]);
    }for(i= 0; i<5; i++){
        printf("a[%d] = %d\n", i, a_rr[i]);
        }
    return 0;
}