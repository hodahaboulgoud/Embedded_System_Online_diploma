/*
 * main.c
 *
 *  Created on: Feb 14, 2024
 *      Author: Hoda
 */
#include <stdio.h>
int main (){
	float x,y;
	printf("Enter two numbers :");
	fflush(stdout);fflush(stdin);
	scanf("%f %f",&x,&y);
	float mul = x*y;
	printf("%f",mul);

}

