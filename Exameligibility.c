/*
name:MARY WANJIKU
Reg:CT100/G/26211/25
Desc:QUESTIONNAIRE OF FINAL EXAM
*/

#include <stdio.h>

int main()
{
	int attendance;
	int average_marks;
	
	//user input
	printf("MY ATTENDANCE IN PERCENTAGE:");
	scanf("%d",& attendance);
	printf("MY AVERAGE_MARKS;");
	scanf("%d",& average_marks);
	
	//conditions
	if (attendance>=75 && average_marks>=40){
		printf("YOUR ELIGIBLE FOR THE EXAMS");
	}else{
	printf(" YOUR NOT ELIGIBLE FOR FINAL EXAM");
	}
		return 0;
}