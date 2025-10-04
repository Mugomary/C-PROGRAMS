/*
Name:MARY wanjiku
REG:CT100/100/G/26211/25
DESCRIPTION:FINDING S.A AND VOLUME
surface_area =2*M_PI*r*r+2*M_PI*r*h
volume:M_PI*r*r*h
*/
#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	double r,h,surface_area, volume;
	printf("input length:");
	scanf("%lf",&r);
	
	printf("input height:");
	scanf("%lf",&h);
	
	surface_area =2*M_PI*r*r+2*M_PI*r*h;
	volume = M_PI*r*r*h;
	
	printf("surface_area of cylinder =%.2f\n",volume);
	printf("The volume of cylinder =%.2f\n",volume);
	return 0;
}
