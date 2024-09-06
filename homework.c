#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers a, b and c:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a == b && b == c){
        printf("same value");
    }else{
        printf("Different value");
    }
    return 0;
}
