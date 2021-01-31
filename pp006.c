//  Write a program to create an array of 10 integers, input the data and show all even numbers in given numbers


#include<stdio.h>
main(){
	int a[10],i;
	for (i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("even numbers are\n");
	for (i=0;i<10;i++){
		if(a[i]%2==0)
		
		printf("%d \n",a[i]);
	}
}

/* program output

  input         output
                even number are
  1             2
  2             4
  3             6
  4             8
  5             10
  6
  7
  8
  9
  10
  
  */
