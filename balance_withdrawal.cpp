/*
NAME:mary wanjiku
REG:CT100/G/26211/25
DATE:09/10/25
DESC;While_loop_bank_withdrawal
*/

#include <stdio.h>
int main()
{
 
 printf("using while loop: \n");
 double withdrawal;
 double balance=2000;
 while(balance>0)
 {
 	printf("my balance: %f\n",balance);
 	printf("input withdrawal amount:");
 	scanf("%lf",&withdrawal);
if(withdrawal<=0){
	printf("enter a positive amount to withdraw \n");
	continue;
}
balance-=withdrawal;
printf("my balance:%lf\n\n",balance);
 }
printf("my balance is zero or negative");
 
	return 0;
}