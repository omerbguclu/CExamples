#include <stdio.h>
#include <stdlib.h>
void prototype(char);
int main()
{
//    sizeOfVariables();
//    shifting();
//    andOrParameters();
//    loops();
/*    char a;
    printf("%c",prototype(a));*/
//    pointers();
//    pointerArrays();
//    mallocExample();
/*    int a = 10;
    callByValue(a);//Value will not change because of its coming from a method
    printf("a->%d\n",a);
    callByReference(&a);//Value will change because we are directly point the address of a
    printf("a->%d\n",a);*/
//    structExample();
//    stringExample();
//    fileExample();
//    binarySearch();
    int array[25] = {0};
    int size = *(&array+1)-array;
    printf("%d->%d",array,size);
    //for(int i=0;i<sizeof(array);i++){}
}

void prototype(char a){


    printf("\n");
    printf("Prototype Example\n");
    printf("Enter a character");
    scanf("%c",&a);
    printf("a = %c\n",a);
}
