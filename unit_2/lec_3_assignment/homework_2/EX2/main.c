/*
 * main.c
 *
 *  Created on: Feb 15, 2024
 *      Author: Hoda
 */
#include <stdio.h>

int main(){
   char x;
   printf ("Enter an alphabet : ");
   fflush(stdout);fflush(stdin);
   scanf("%c",&x);
   if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' )
	   printf("%c is a vowal",x);
   else
	   printf("%c is a constant",x);
}

