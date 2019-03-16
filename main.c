#include <stdio.h>
#include <stdlib.h>

void sizeOfVariables(void);
void shifting(void);
void andOrParameters(void);
void loops(void);
void prototype(char);
void pointers(void);
void pointersArrays(void);
void mallocExample(void);
void callByValue(int);
void callByReference(int*);
void structExample(void);
void stringExample(void);
void fileExample(void);
void binarySearch(void);
void sortExamples(void);
void recursiveExample(void);

int main()
{
//    sizeOfVariables();
//    shifting();
//    andOrParameters();
//    loops();
/*    char a;
    printf("%c",prototype(a));
*/
//    pointers();
//    pointerArrays();
//    mallocExample();
/*    int a = 10;
    callByValue(a);//Value will not change because of its coming from a method
    printf("a->%d\n",a);
    callByReference(&a);//Value will change because we are directly point the address of a
    printf("a->%d\n",a);
*/
//    structExample();
//    stringExample();
//    fileExample();
//    binarySearch();
    sortExamples();
//    recursiveExample();


}

void prototype(char a){
    printf("\n");
    printf("Prototype Example\n");
    printf("Enter a character");
    scanf("%c",&a);
    printf("a = %c\n",a);
}
