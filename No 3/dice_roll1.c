
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int max_rand = 6, min_rand =1; // setting the minimum and maximum vlaue of a dice
    char name1[15], name2[15];
    int roll_1, roll_2, roll_3, player_1, player_2 ,roll_4, roll_5, roll_6;
    printf("Name of Players:\n");
    scanf("%s", name1);
    scanf("%s", name2);

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
        printf("Winner is %s", name1 );
    }else{
        printf("Winner is %s", name2);
    }
    return 0;

}