/*
 * main.c
 *
 *  Created on: Feb 17, 2024
 *      Author: Hoda
 */
#include <stdio.h>

int main(){
	char op;double x,y;
    printf("Enter operator either + or - or * or / : ");
    fflush(stdout);fflush(stdin);
    scanf("%c" , &op);
    printf("Enter two operandes : ");
    fflush(stdout);fflush(stdin);
    scanf ("%lf %lf",&x,&y);
    switch(op){
    case '+' :
    	printf("%lf %c %lf = %lf",x,op,y,x+y);
    	break;
    case '-' :
    	printf("%lf %c %lf = %lf",x,op,y,x-y);
    	break;
    case '*' :
        	printf("%lf %c %lf = %lf",x,op,y,x*y);
        	break;
    case '/' :
    	if (y != 0)
        	printf("%lf %c %lf = %lf",x,op,y,x/y);
    	else
    		printf("Error!");
        	break;
    }



}

