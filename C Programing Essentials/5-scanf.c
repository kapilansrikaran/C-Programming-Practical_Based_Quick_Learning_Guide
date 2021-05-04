/*
* File Name: scanf.c
* Author: Kapilan Srikaran
* Date: 04/05/2021
* Description: use scanf to get data from the user. 
*/


#include <stdio.h>

void main(){
	
	int age;
	
	printf("Enter Your Age: "); //Display Text
	scanf("%d",&age); //get the input data from user use scanf 
		
	if(age<=18){
		printf("Sorry, Your is Minor.\n");
	}
	else{
		printf("Congratulations, Your is Major.\n");
	}
	
}
