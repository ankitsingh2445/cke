// Write a program to input two numbers and print all even numbers in given range


#include<stdio.h>
main()
{
	int n1,n2,i;
	scanf("%d",&n1);
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++){
	if(i%2==0)
	printf(" %d \n",i);
	
	

	}
	
}


// program output


//  input         output

//  1             2
//  10            4
//                6
//                8
//                10

