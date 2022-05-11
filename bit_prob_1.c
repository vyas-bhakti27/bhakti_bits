// Q1) Printing the binary pattern of a 16 digit integer

#include <stdio.h>

main()
{
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    bit_pattern(a); //calling a function
}
bit_pattern(int a)  // define the function with arguments
{
    int i,mask;
    for(i=15;i>=0;i--)
    {
        mask=1<<i; // left shift the i by 1
        if((a&mask)==0)
            printf("1");
            
    }
    printf("\n");
}
