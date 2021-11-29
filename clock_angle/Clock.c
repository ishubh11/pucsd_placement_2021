#include<stdio.h>
#include<stdlib.h>
int findClockAngle(double h,double m)
{
	if(h<0 && h>12)
	{
		printf("Invalid value of Hour");	
	}
	if(m<0 && m>59)
	{
		printf("Invalid value of Minute");	
	}
	if(h==12) h = 0;
	if(h>12) h = h-12;

	int h_ang = h*(360/12)+(m*360/(12*60));
	int m_ang = m*(360/60);
	
	int angle = h_ang - m_ang;
	if(angle>180)
	{
		angle = 360-angle;
	}
	return angle;
}
int main()
{
	printf("%d",findClockAngle(09,00));
	printf("%d",findClockAngle(03,30));
	printf("%d",findClockAngle(05,00));
	printf("%d",findClockAngle(08,45));
	
}