#include <stdio.h>

void bitwiseOperators(){
    findingOddAndEvenNumbers();
    changingNumbers();
    dividingNumber();
    multiplyNumber();
    checkPowerOfTwo();
}

void findingOddAndEvenNumbers(){

    printf("Finding odd and even numbers with bitwise.\n");
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    if(a&1){
        printf("\na is a odd number\n");
    }else if(~a&1){
        printf("\na is a even number\n");
    }else{
        //Blank
    }
}

void changingNumbers(){

    printf("Reversing numbers without using temp value.\n");
    int a,b;
    printf("Enter a number for first value:");
    scanf("%d",&a);
    printf("\n");

    printf("Enter a number for second value:");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nFirst value is -> %d, Second value is -> %d\n",a,b);

    printf("Reversing numbers using bitwise operators.\n");
    printf("Enter a number for first value:");
    scanf("%d",&a);
    printf("\n");

    printf("Enter a number for second value:");
    scanf("%d",&b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\nFirst value is -> %d, Second value is -> %d\n",a,b);
}

void dividingNumber(){

    printf("Dividing numbers to 2 with bitwise operators.\n");
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("\n");

    a = a >> 1;
    printf("Value of a is ->%d",a);
}

void multiplyNumber(){

    printf("Multiply a number with 2 with bitwise operators.\n");
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("\n");

    a = a << 1;
    printf("Value of a is ->%d",a);
}

void checkPowerOfTwo(){

    printf("Checking power of two.\n");
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    printf("\n");

    a = (a != 0) && !(a & (a - 1));
    printf("Value of a is ->%d",a);

}
