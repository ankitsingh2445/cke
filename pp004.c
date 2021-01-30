// Write a program to input a number and check it to be even or odd without using any
//  arithmetic, relational, logical or bitwise operator.




#include<stdio.h>
struct number{
	unsigned n:1;
};
main(){
	int numb;
	struct number a;
	scanf("%d",&numb);
	a.n=numb;
	if(a.n)
	printf("entered number %d is odd",numb);
	else
	printf("entered number %d is even",numb);
	
	
}


// output of program.


// input          output
// 2              entered number 2 is even 
// 17             entered number 17 is odd
