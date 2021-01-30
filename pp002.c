// Write a program to input a number and check it to be even or odd using switch statement.


#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	switch(n%2){
		case 0: printf("entered number %d is even",n);
		        break;
		case 1: printf("entered number %d is odd",n);
		        break;
	}
}


// output of program.


// input          output
// 2              entered number 2 is even 
// 17             entered number 17 is odd
