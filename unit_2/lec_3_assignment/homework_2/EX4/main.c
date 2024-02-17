/*
 * main.c
 *
 *  Created on: Feb 17, 2024
 *      Author: Hoda
 */
#include <stdio.h>

int main(){
   double x;
   printf ("Enter a number : " );
   fflush(stdout);fflush(stdin);
   scanf ("%lf",&x);
   if (x > 0)
	   printf("%lf is postive",x);
   else if (x < 0)
	   printf("%lf is negative",x);
   else
	   printf("you entered 0");
}


