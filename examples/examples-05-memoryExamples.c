#include <stdio.h>
#include <stdlib.h>
void mallocExample(){
    printf("\n");
    int a = 10;
    int *p = (int*)malloc(sizeof(int)*a);
    printf("Malloc Example\n");
    if(p == NULL)
    {
        printf("Error! memory not allocated.\n");
        exit(0);
    }else{
        printf("Memory allocated.\n");
    }
    for(int i = 0 ; i<10 ; i++){
        printf("After %d.element of p array is ->%d\n",i,p[i]);
        p[i]=i;
        printf("Before %d.element of p array is ->%d\n\n",i,p[i]);
    }
    free(p);
}

void callByValue(int a){
    a=50;
}

void callByReference(int *a){
    *a=80;
}
