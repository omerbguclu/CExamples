#include <stdio.h>
void sizeOfVariables(){
    printf("Storage size for int : %d byte\n", sizeof(int));
    printf("Storage size for float : %d byte\n", sizeof(float));
    printf("Storage size for long : %d byte\n", sizeof(long));
    printf("Storage size for unsigned int : %d byte\n", sizeof(unsigned int));
    printf("Storage size for char : %d byte\n", sizeof(char));
    printf("Storage size for char pointer: %d byte\n", sizeof(char*));
    printf("Storage size for int pointer : %d byte\n", sizeof(int*));
}
