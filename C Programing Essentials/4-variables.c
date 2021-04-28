/*
* File Name: variables.c
* Author: Kapilan Srikaran
* Date: 28/04/2021
* Description: Declaring,Initializing variables and print the values 
*/

#include <stdio.h>

int main(){
	int a=75; // [int a] is a declaring part of the statement, and [55] is a Initializing part of the statement 
	float b= 5.9;
	double c= 45.5456845;
	char d= 'K'; //In order char datatype we must to be use single quotes not double quotes 
	// void is a datatype
	
	const double PI = 3.14; 
			
	// Many way to Declaring and initializing the variable 
	int e;
	int f,g,h=5;
	int i=e=5; // In this case we must to be declar the [e] variable befor this line executed   
	int k=5+h;
	
	printf("a equal %d",a);// wehen we print the value of the variable we must to be put the datatype format specifier eg: int ==> %d char ==> %c;
	printf("\nPrint char value of a equal to %c",a); 
	
	
	printf("\n\nb equal %f",b);
	printf("\nc equal %.2f",c);
	
	printf("\n\nd equal %c",d);
	printf("\nPrint the int value of d equal to %d",d);
	
	printf("\n\nsizeof(a) = %d bytes",sizeof(a));	//4 bytes ==> int
	printf("\nsizeof(b) = %d bytes",sizeof(b)); 	//4 bytes ==> float
	printf("\nsizeof(c) = %d bytes",sizeof(c));		//8 bytes ==> double
	printf("\nsizeof(d) = %d bytes",sizeof(d)); 	//1 bytes ==> char
	
	printf("\nAdress of a=%p",&a); //storage location is in memory
	printf("\nd variable store:%7.3f \n", c); // [7] Digit ==> totaly 7 character including space; [.3]decimal ==> after [.]this print 3 decimal point;  
	
	
	return 0;
}


//Note
/*
Data types			Format Specifier
Integer(signed) 		%d
Integer(unsigned) 		%u
char 					%c
Array of char 			%s
float / double 			%f
long float 				%lf
Pointer value(address)	%p
*/

/*
C is case sensitive.

Storage locations in memory can be used to hold data for a program.

An identifier name(Variable Name) cannot consist of more than 31 characters.

A storage location has:
	1.Value - the information stored at that location.
	2.Type - the type of data stored at that location.
	3.Address - the number which says where the storage location is in memory.
	4.Name - an identifier that a program associates with that storage location.

*/


// Practice questions 
/*
#include <stdio.h>
int main()
{
 char ch1 = ‘A’;
 char ch2= ch1+5;
 printf(“%c\n”,ch2);
 int x= ‘B’*2-7;
 printf(“%c”, x);

 return 0;
 }
*/
