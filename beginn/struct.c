#include <stdio.h>
#include <string.h>

struct Player
{
    char name[2][12];
    int score;
};



int main(void){
    /*
    struct =collection of related members ("variables")
            they can be of different data types
            listed under one name in a block of memory
            VERY SIMILAR to classes in other languages (but no methods)
    */

    struct Player player1 ={.name[0]="BRO",.name[1]="Code",.score=4};
    //struct Player player1 ={"BRO","Code",4};
    struct Player player2;

    strcpy(player2.name[0], "BRa");
    player2.score = 5;

    printf("%s\n",player1.name[0]);
    printf("%s\n",player1.name[1]);
    printf("%d\n",player1.score);
    printf("%s\n",player2.name[0]);
    printf("%d\n",player2.score);

    return 0;
}