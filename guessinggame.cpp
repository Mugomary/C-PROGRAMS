/*
NAME:mary wanjiku
REG:CT100/G/26211/25
DESC:guessing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int secretnumber;
int guess;
int attempt=0;

srand(time(null));
secret number=rand()%20+1;

printf("i selected number between 1and20.try to guess it\n");
do{
	printf("enter your guess:");
	scanf("%d",&guess);
	attempts++;
if(guess>secret number{printf("too high!\n");
}else if is(guess<secretnumber){printf("too low!\n");
}else{printf("congraturations!\n");
printf("you guessed the number in%dattempts\n",attempts);
}
}while(guess!=secretnumber);	
	return 0;
}