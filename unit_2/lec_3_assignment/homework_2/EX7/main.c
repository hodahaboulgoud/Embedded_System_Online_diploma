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
   fflush(stdout);fflush(stdin);
   scanf ("%d",&x);
   int fact = 1;
   if (x > 0){
   for(int i = 2; i <= x ; i++)
	   fact *= i ;
   printf ("fact = %d",fact);
   }
   else if (x == 0)
	   printf("fact = %d",1);
   else
	   printf("Error!!! factorial of negative number doesnot exist");

}


