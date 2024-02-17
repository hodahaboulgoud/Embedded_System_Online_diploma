/*
 * main.c
 *
 *  Created on: Feb 14, 2024
 *      Author: Hoda
 */
#include <stdio.h>

int main (){
	int x ,y;
	printf("Enter two Integers : ");
    fflush(stdout);fflush(stdin);
	scanf("%d %d",&x,&y);
	printf("the summation = %d",x+y);
}
