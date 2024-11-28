#include <stdio.h>

int main() {
   int numberlists[] ={1,2,3,4,5};
    int length = 0 ;
	 for (int i = 0 ;i < 5 ; i++ ){
         printf ("%d\n", numberlists[i]);     
	      length ++;		    
	}
    printf ("do dai cua bien %d\n ", length	 );
    return 0;
}
