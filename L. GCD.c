#include <stdio.h>
int
main ()
{
 int n1, n2, small = 0,i = small ;
 
scanf ("%d", &n1);
 
scanf ("%d", &n2);
if (n1 < n2)
 {
 small = n1;
 }
 else
 {
 small = n2;
 }
for (int i = small; i >= 1; i--)
 {
if (n1 % i == 0 && n2 % i == 0){
 printf ("%d",i);
 break;
 
 }
 
} return 0;
    
}
