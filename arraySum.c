#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int n,i,j,a[10][10];
   
	printf ("Dwse enan peritto arithmo stilwn kai grammwn apo to 3 mexri to 9\n");
	
	scanf("%d", &n);
	
	while (n>9 || (n % 2 == 0)) {
		printf("O arithmos prepei na einai perittos kai mesa sta oria. Dwse allon arithmo\n");
		scanf("%d", &n);
		}  	
    	   	   	

        int max = n*n;		// max number of positions
    	i = n/2;			// we initialize the position of start, where 1 is going to be
		j = n-1;
		int k;
		

   		for (k = 1; k<= max; k++) {			

	        a[i][j]=k;	
	        i++;							
	        j++;		 
	
	        if (k % n == 0){ 				//if the place is not empty (if the division is exact) then we go one line down and two columns before from that position that it was going to go if the position wasn't taken
	            i=i-1; 						
	            j=j-2; 	
	        }
		    else if (j == n){				//when we are going to go out of line in the right side of the array, we put the number in the first column of the respective line  
	            j=j-n;	
	        }	
	        else if (i == n){			// when we are going to go out of line in the down side of the array, we put the number in the first line of the respective column  
	            i=i-n;	
	        }
		}
	                
	        
		for (i=0; i<n; i++){	
	        for (j=0; j<n; j++){	
	            printf("%4d  ",a[i][j]);
		        }	
	        printf("\n");	
	    }
	  	    	    
	    
	    	return 0;   	        
	        	
	    }   

