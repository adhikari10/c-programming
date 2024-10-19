#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


//function to create the file for the game results 
void make_csv(char *filename, int *arr){
    FILE *file = fopen(filename, "w");
    
    for(int i = 0; i<5; i++){
        fprintf(file, "%d", arr[i]);
        
        //this maintain the linsace in the file 
        if(i<4){
            fprintf(file, "\n");
            
        }
    }fclose(file);
}
// initilizing the variables
int main (){
    int user_choice[5], i, min = 1, max = 3, bot_choice[5], result[5];
    srand(time(0));// using this for not to replicate while generating the random values everytime
    for(i =0; i<5; i++){
        printf("Choose(1, 2 or 3)\n1.Rock\n2.Paper\n3.Scissor\nYou select: ");
        scanf("%d", &user_choice[i]);
        bot_choice[i] = rand() % (max - min + 1 ) + min;// generate the random value 
        printf("\nNpc selects %d", bot_choice[i]); 
        
        if(user_choice[i] == bot_choice[i]){
            printf("\n!!!Tie!!!\n");
            result[i] = 0;
            
        }else if((user_choice[i] == 1 && bot_choice[i] == 3) ||// condition for the winner in the game 
        (user_choice[i] == 2 && bot_choice[i] ==1) ||
        (user_choice[i] == 3 && bot_choice[i] == 2)){
            printf("\nYou Win\n");
            result[i] = 1;
        
        }else{
            printf("\nYou loose\n");
            result[i] = -1;
        
           
        }printf("\n******************************\n");
    }
    
    make_csv("Game_Result.csv", result);// create the csv file
    return 0;
}
