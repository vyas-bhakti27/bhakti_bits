// Q2) Program to find whether a number is even or odd

#include <stdio.h>

main()
{
    int num;
    int mask=0x1;
    printf("Enter an number:");
    scanf("%d",&num);
    if((num&mask)==0)  // masking with 0x1
        printf("Number is even\n");
    else
        printf("Number is odd\n");
}
