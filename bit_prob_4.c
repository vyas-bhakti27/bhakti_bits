// Q4)  Problem to swap first 8 bits with the last 8 bits in a 16bit integers

#include<stdio.h>

int num, i;
printf ("Enter number in. hexadecimal ") ; // enter a hexadecimal number
scanf ("%x" , &num) ;
printf ("Before swapping, num %x\n" , num) ;  // before swaping
bit_pattern(num);
num=(num«8) I ((num»8)&OxOOFF)
printf ("After swapping, num = %x\n", num) ;  // after swapping
bit_pattern(num);
