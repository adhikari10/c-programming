
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    srand(time(0));
    int a, b, max_rand = 10, min_rand = 1;
    a = rand() % (max_rand - min_rand + 1) + min_rand;
    b = rand() % (max_rand - min_rand + 1) + min_rand;
    if(a>b){
        printf("The maximum is a= %d", a);

    }else if(a<b){
        printf("The maximum is b = %d", b);
    }else{
        printf("the maximum are both  a and b = %d, %d ",a ,b);
    }

    return 0;
}
