#include <stdio.h>

void swap( int *a, int *b ); /* Function Prototype */

/* Function main begins program execution */

int main( void )
{
      int a,b;
	  
	  printf( "Enter two integers, separated by spaces : " );
	  scanf( "%d%d", &a, &b );
	  
	  printf( "Before Swap => a : %d b : %d\n", a, b );
      
	  swap( &a, &b ); /* Call by Reference */
      printf( "After  Swap => a : %d b : %d\n", a, b );
      
	  printf("\nPress any Key to Exit..\n");
		while( getchar() != '\n');
			getchar();
	  printf("\n\n");
	  
	  return 0;
}

void swap( int *a, int *b )
{
      int t;
      t  = *a;
      *a = *b;
      *b = t;
}
