#include <stdio.h>
 
int
main ()
{
  int totalrow;
  scanf ("%d",&totalrow);
 
  for (int row = 1; row <= totalrow; row++)
    {
 
       for (int sp = 1; sp <= (totalrow - row); sp++)
	  {
     	printf (" ");
	    
	}
   
  
      for (int star = 1; star <= ((2 * row) - 1); star++)
	{
	    printf ("*");
	}
      printf ("\n");
 
    }
 
 
  return 0;
}
