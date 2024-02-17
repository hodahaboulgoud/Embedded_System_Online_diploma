/*
 * main.c
 *
 *  Created on: Feb 17, 2024
 *      Author: Hoda
 */
#include <stdio.h>

int main(){
   int x;
   printf("Enter an Integer :");
   fflush(stdout);ffluhs(stdin);
   scanf ("%d",&x);
   int sum = 0;
   for(int i = 1; i <= x ; i++)
	   sum += i ;

   printf ("Sum = %d",sum);
}


