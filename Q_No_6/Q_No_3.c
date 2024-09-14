#include <stdio.h>
//creating function to calculate the area of triangle
int func1(int width, int height){
    int area_t = (width * height)/2;
    return area_t;
}


// creating function to calculate the area of rectangle
int func2(int width, int height){
    int area_r = width * height;
    return area_r;
}


// creating the void function to show the claculated areas of both rectangle and triangle
void func3(int width, int height, int select){
    printf("select area of which you want to calculate:\n0. Triangle\n1. Rectangle\n");
    scanf("%d", &select);
     
     // apply the condition 'if' to determine the calculation 
    if(select == 0){
        int area_t = func1(width, height);// calling the func1 to calculate the area
        printf("The area of triangle is :%d", area_t);

        // apply the condition if 
    }else if(select == 1){
        int area_r= func2(width, height);// calling the function to calculate the area
        printf("The area of rectangle is: %d", area_r);
    }else{
        printf("Invalid selection!!!");//prints the invalid message if the selection is invalid
    }
}
int main() {

    
    int width, height, select;
    printf("Enter Width:");
    scanf("%d", &width);
    printf("Enter height:");
    scanf("%d", &height);
    
    //calling the func3 after the selection of user to do the calculation:
    func3(width, height, select);
    return 0;

}