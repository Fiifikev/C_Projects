#include  <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - the main function of the guessing game
 *@void:none
 *Return:the guessed number
 *
 */


int main(void)
{
int num, guess, nguess;
nguess = 1;
srand(time(0));
num = rand() % 100 + 1;
do {
printf("Please guess the number from 1  to  100\n");
scanf("%d", &guess);
if (guess > num)
{
printf("Please Lower Your Guess Number!!\n");
}
else if (guess < num)
{
printf("Please Higher Your Guess Number!!\n");
}
else
{
printf("You Got it Right", nguess);

}
nguess++;


} while (guess != num);


return (0);
}
