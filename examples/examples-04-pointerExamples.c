#include <stdio.h>
void pointers(){
    printf("\n");
    int *p;
    int a=10;
    p=&a;
    printf("Pointers \n");
    printf("\n Address of p->%d",(int)&p);
    printf("\n Content of p->%d",(int)p);
    printf("\n Pointer of p->%d",(int)*p);

    printf("\n Address of a->%d",(int)&a);
    printf("\n Content of a->%d",(int)a);
    //printf("\n Pointer of a->%d",*a);//this gives us an error due to "a" is not a pointer

    printf("\nIs &a->%d=p->%d true->%d",(int)&a,(int)p,(int)&a==(int)p);

}
void pointerArrays(){
    printf("\n");
    int d[] = {0,1,2,3,4,5,6,7,8,9};
    int *p;
    p=(int*)&d;
    printf("Pointer at Arrays \n");
    printf("4. element of d array with d[3]->%d\n",d[3]);
    printf("4. element of d array with *(p+4)->%d\n",*(p+3));
}


