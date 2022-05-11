//Q6) Program to print the two's complement of a number.

#include<stdio.h>
main()
{
int num, i, mask;
printf ("Enter a number ") ;
scanf("%d,&num) ;
printf("Two'S complement is %d\n,~num+1);
for(i=0;i<=15;i++)
{
  mask=1<<i;
  if((num&mask)!=0
     break;
}
for(i=i+1;i<=15;i++)
     {
       mask=1<<i;
       num=num^mask;
     }
     printf("Two's complement is : %d\n",num); // print the two's complement
     
}

    
     
     
