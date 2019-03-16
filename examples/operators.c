#include <stdio.h>

void shifting()
{
    printf("\n");
    int a = 10;

    printf("Left Shift\n");
    printf("a equals to 10\n");
    printf("a to left 2 times %d\n",a<<2);
    printf("a to left 3 times %d\n",a<<3);
    printf("a to left 4 times %d\n",a<<4);
    printf("a to left 5 times %d\n",a<<5);
    printf("a to left 6 times %d\n",a<<6);
    printf("a to left 7 times %d\n",a<<7);
    printf("a to left 8 times %d\n",a<<8);
    printf("a to left 9 times %d\n",a<<9);
    printf("a to left 10 times %d\n",a<<10);

    printf("\n");
    printf("Right Shift\n");
    printf("a %d\n",a>>2);
    printf("a %d\n",a>>3);
    printf("a %d\n",a>>4);
}

void andOrParameters(){
    printf("\n");
    int a = 5;
    int b = 2;
    int c = a&b;
    printf("And Or Operators \n");
    printf("c=a&b   -> %d\n",c);
    printf("b|c&2 -> %d\n",(b|c)&2);
    printf("a|b -> %d\n",a|b);
}

