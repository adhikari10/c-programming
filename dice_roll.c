
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int max_rand = 6, min_rand =1; // setting the minimum and maximum vlaue of a dice

    int roll_1, roll_2, roll_3, player_1, player_2 ,roll_4, roll_5, roll_6;
    roll_1 = rand() % (max_rand - min_rand + 1) + min_rand;
    roll_2 = rand() % (max_rand - min_rand + 1) + min_rand;
    roll_3 = rand() % (max_rand - min_rand + 1) + min_rand;


    player_1 = roll_1+roll_2+roll_3;

    roll_4 = rand() % (max_rand - min_rand + 1) + min_rand;
    roll_5 = rand() % (max_rand - min_rand + 1) + min_rand;
    roll_6 = rand() % (max_rand - min_rand + 1) + min_rand;

    player_2 = roll_4+roll_5+roll_6;
    if(player_1 == player_2){
        printf("same score");
    }else if(player_1 > player_2){
        printf("Winner player 1");
    }else{
        printf("winner player 2");
    }
    return 0;

}