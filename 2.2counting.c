
#include <stdio.h>


/* count the number of passes ( >=userdefined passmark ) in a set of marks */

void passcount( void ); /* Function Prototype */

int main( void )
{
     passcount();
	 system( "pause" );
     return 0;
}

void passcount()
{
     int passmark;
     int count; /* contains the number of passes on termination */
     int i;     /* current number of marks processed            */
     int m;     /* current mark                                 */
     int n;     /* total number of marks to be processed        */

	 printf( "Enter the passmark value:" );
     scanf( "%d",&passmark );
     
     printf( "Enter a number of marks n on a separate line followed by the marks:" );
     scanf( "%d",&n );
     count = 0;
     i = 0;

      /* Read next mark, test it for pass and update count if necessary */
      while ( i < n )
      {
           i = i + 1;
           scanf( "%d",&m ); /* scanf within the loop ensures that we accept only n number of mark items */
           if( m >= passmark ) 
		   {
                count = count + 1;
           }  
	  }
      printf( "Number of passes = %d\n",count );
}
