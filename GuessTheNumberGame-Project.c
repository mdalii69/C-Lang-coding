#include <stdio.h> //For Input Output
#include <stdlib.h>//For Generating Random Number
#include <time.h>  //For Time Gap
//Guess the number game
int main(){
    int number,guess,nguesses=0;
    srand(time(0));
    number=rand() % 100 + 1; //Genrates a random number between 1 & 100
    //Keep running the loop until the number is guessed 
    do{
        printf("Guess the number between 1 to 100:");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower Number Please!\n");
        }
        else if(guess<number){
            printf("Higher Number Please!\n");
        }
        else {
            printf("You Guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}