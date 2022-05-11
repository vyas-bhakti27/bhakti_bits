//Q3) Program to convert a binary pattern to a equal to an integers.

#include <stdio.h>

main()
{
    char bit;
    int i,num=0;
    printf("Enter any bit pattern less than or equal to 16 bits:\n");
    for(i=0;i<=15;i++)
    {
        bit=getchar();
        if(bit=='0')         // if bit==0
            num=num<<1;
        else    if(bit=='1')  //if bit==1
            num=(num<<1)+1;
        else
            break;
    }
    printf("Hexadecimal : %x\n",num);  // print the hexadecimal
    printf("Decimal : %d\n",num);     // print decimal

    return 0;
}
