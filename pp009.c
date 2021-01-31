//  Write a program having a function iseven() which takes a number as input and returns 1 if the number is even else returns 0. 
//Create the main() function  to input a number and check it to be even or odd using iseven() function.



enum{false,true
};
int iseven(int n){
	if(n%2)
	   return false;
	else
	   return true;
}
main(){
	int numb;
	scanf("%d",&numb);
	iseven(numb)? printf("entered number  %d is even ",numb): printf("entered number %d is odd",numb);
}


/*      program output
        
        input                    output
         
         2                       entered number 2 is even
         7                       entered number 7 is odd
         
         
         
         
*/
