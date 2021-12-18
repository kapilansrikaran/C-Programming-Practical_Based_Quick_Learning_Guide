/*
* File Name: escapeSequences.c
* Author: Kapilan Srikaran
* Date: 28/04/2021
* Description: use escape sequences to print special characters like new line, tab space, quotes etc. within printf( ) statements 
*/

#include <stdio.h>

int main(){
	printf("Hello\nWorld");			//use of \n
	printf("\nHello\tWorld");		//use of \t
	printf("\n\"Hello World!\"");		//use of \"
    	printf("\nHello\bWorld!");		//use of \b backspace use to delete the one character
    
    	printf("\n\n");
    	//Bill printing
    	printf("Item Name\tPrice");
    	printf("\n---------\t-----");
    	printf("\nBanana\t\tRs:150");
    	printf("\nApple\t\tRs:200");
    	printf("\nOrange\t\tRs:40");
    
	return 0;
}


/*
Commonly used escape sequences are:
 \n (newline)
 \t (tab)
 \v (vertical tab)
 \b (backspace)
 \r (carriage return)
 \” (double quotes)
 \’ (single quotes)
*/
