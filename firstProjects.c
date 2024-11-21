#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int random, guess;
    int no_of_guess=0;
    srand(time(NULL));
    printf("\n\nWelcome to the world of Guessing numbers\n");
    // generating between 0 to 100.
    random = rand() %  100 +1;
    do
    {
        printf("\nPlease enter your guess number(1 to 100) : ");
        scanf("%d",&guess);
         no_of_guess ++;

        if (guess <random)
        {
            printf("Guess a larger number.\n");
        }
        else if(guess > random){
            printf("Guress a smaller number.\n");
        }
        else{
            printf("Congratulation !! you have successfully guessed the number in %d attempts",no_of_guess);
        }
        
    } while (guess != random);

    printf("\nBye Bye, Thanks for playing..");
    printf("\nDevloped by : sumit pathak");
    
}