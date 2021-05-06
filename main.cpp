#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <strings.h>
using namespace std;
int rollDice(int sides, int numRolls){
    int total = 0;
    int rolls[numRolls];
    for(int i = 0; i<numRolls; i++){
        rolls[i] = rand()%sides + 1;
        total += rolls[i];
    }
    return total;

}
int main(){
    

    int dice, sides;
    cout<<"Input Dice: ";
    while(scanf("%dd%d", &dice, &sides)==2){
        int result = rollDice(sides, dice);
        cout<< "You rolled: " << result << "\n";
        cout<< "Input Dice: ";
    }




    return EXIT_SUCCESS;
}
