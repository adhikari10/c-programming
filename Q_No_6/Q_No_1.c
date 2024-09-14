#include <stdio.h>
// create the function to calculate the area of triangle using the formulae
int func1(int width, int height){
    int area = (width * height)/2;
    return area;// return the area to the calling function 
}
int main(){
    int width = 10, height = 8, AREA;// initilize the width and the height and seclaring AREA to dtore the value
    //of calculated area of a triangle
    
    AREA = func1(width, height);// calling the func1 and passing the width and height arguments
    //the result of the function is stored in the area.
    
    printf("Area of triangle = %d", AREA);// print the calculated area 
    return 0;
}