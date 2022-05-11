#include<stdio.h>
main(
{
int num, n, i , bit;
printf ("Enter number in hexadecimal :") ;
scanf("%x,&num) ;
bit_pattern(num) ;
printf ("Enter number of Positions· to be rotated :") ;
scanf("%d,&n) ;
n=n%16;
num=rotate_right(num, n);
printf ("Number after right rotation is %x\n ", num) ; // number after right rotation
bit_pattern(num) ;
num=rotate_left(num,n) ;
printf ("Number· after left rotation is %x\n ",num) ;  // number after left rotation
bit_pattern(num) ;
      }
rotate_right (int num, int n)
{
int i,lsbit;
for(i=l;i<=n;i++0
{
lsbit=num&1?1:0;   //Test LSB
num=num>>l;
if (lsbit==O)
num=num&~(1<<15);  // swich off MSB
else
num=numl (1<<15);  // switch on MSB
return num;
rotate_left (int num, int n)
int i,msbit;
for(i=l;i<=n;i++)
msbit=num&(l«15)?1:0;  // Test MSB
num=num<<l;
if (msbit== 0)
num=num&~l; // swich on LSB 
else
num=num|l; // Switch on LSB
return num;
}
