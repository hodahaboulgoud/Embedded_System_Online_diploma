/*
 * main.c
 *
 *  Created on: Feb 17, 2024
 *      Author: Hoda
 */

#include <stdio.h>

int main(){
   double x,y,z;
   printf("Enter three numbers :");
   fflush(stdout);fflush(stdin);
   scanf ("%lf %lf %lf",&x,&y,&z);
   if (x >= y && x >= z)
	   printf("largest number = %lf" , x);
   else if (y>=x && y >= z)
	   printf("largest number = %lf" , y);
   else
	   printf("largest number = %lf" , z);

}
