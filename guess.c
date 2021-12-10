#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    
    int number;
    int guess , nguesses = 1;
    srand(time(0));
    number = rand()%100 +1;
    // printf("The number is %d", number);

    //running th eloop until the number is guessed
    do
    {
        printf("guess the number between 1 and 100 \n");
        scanf("%d", &guess);
        if(guess>number){
            printf("lower number please \n");
        }
        else if(guess<number){
            printf("higher number please \n");
        }
        else{
            printf("You guessed it in %d attempts \n", nguesses);
        }
        nguesses++;

    } while (guess != number);
    
    return 0;
}