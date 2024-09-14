#include <stdio.h>
    
int func2(double length, double width){
    double area = length * width;
    return area;
}
int main () {
    double length = 4, width = 5, AREA;
    AREA = func2(length, width);
    printf("The area of rectangle is = %.2f", AREA);
    return 0;

}