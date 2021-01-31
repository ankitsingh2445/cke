//  Write a program to input numbers from user till 0 is pressed and check every given number to be even or odd.



#include<stdio.h>
main(){
	
	int n;
	while(1){
		scanf("%d",&n);
		if(n==0)
		break;
		else{
			if(n%2)
	        printf("entered number %d is odd",n);
         	else
	        printf("entered number %d is even",n);
		
		}
		
		
	}
	
}


/* program output
   
   input         output

   2             entered number 2 is even
   3             entered number 3 is odd
   7             entered number 7 is odd
   8             entered number 8 is even
   0               
*/
