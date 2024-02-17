/*
 * main.c
 *
 *  Created on: Feb 17, 2024
 *      Author: Hoda
 */
#include <stdio.h>

int main(){
   char c;
   printf("Enter a character :");
   fflush(stdout);fflush(stdin);
   scanf("%c",&c);
   if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	   printf("%c is an alphaet ",c);
   else
	   printf("%c is not an alphaet ",c);
}


