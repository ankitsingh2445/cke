//Create a header file as pp010.h having a function iseven() which takes a number as input and returns 1 if the number is even else returns 0.
// Write a program pp010.c, include the header file into it. Create the main() function  to input a number and check it to be even or odd using iseven() function.




#include <stdio.h> 
#include "pp010.h" 
int main(){
	int numb;
	
	scanf("%d",&numb);
	iseven(numb);
	iseven(numb)? printf("entered number  %d is even ",numb): printf("entered number %d is odd",numb);
	
	
	
	
} 


/*      program output
        
        input                    output
         
         2                       entered number 2 is even
         7                       entered number 7 is odd
         
         
         
         
*/
