/*
 * Main.c
 *
 *  Created on: Feb 15, 2024
 *      Author: Hoda
 */
#include <stdio.h>

int main(){
   int x;
   printf ("Enter an Integer u want to check : ");
   fflush(stdout);fflush(stdin);
   scanf("%d",&x);
   if (x % 2 == 0)
	   printf("%d is even",x);
   else
	   printf("%d is odd",x);
}

