// Write a program to input few numbers from command line and print all even numbers from given set of numbers



main(int argc, char *argv[]){
    if(argc==1){
        printf("Syntax is :  <number list>");
        return 1;
    }
    else{
        int i,a;
        for(i=1;i<argc;i++){
        	a=atoi(argv[i]);
            if(a%2==0){
            	printf("%d \n",a);
            	
			} 
		
            
        }
        
        return 0;
    }
}


/* program output
  
   input                         output     
    
    1 2 3 4 5 6                 2 
                                4
                                6
