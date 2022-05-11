//Q5) Swapping the values without using a temporary variable through bitwaise XOR

#include<stdio.h>
main( )
int x,y;
printf·( "Enter values for x and y:");  
scanf("%d%d",&x,&y) ;
printf {"x = %d, y %d\n" , x, y) ;
x=x^y;                           // x XOR with y
y=x^y;                           // x XOR with y
x=x^y;.                          
printf ("x %d, y %d\n" , x, y) ;
