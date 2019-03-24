#include <stdio.h>
#include <stdlib.h>
#include "examples-14-stackWithPointers.h"

void init(stackType **stack){
    stackType *temp = (stackType*)malloc(sizeof(stackType));
    temp->sizeOfStack=2;
    temp->top = 0;
    temp->stackArray = NULL;
    free(*stack);
    *stack = temp;
    printf("STACK INITALIZED!\n");
}
void copy(int *temp,stackType *stack){
    for(int i=0;i<stack->sizeOfStack;i++){
        temp[i] = stack->stackArray[i];
    }
    free(stack->stackArray);
    stack->stackArray = temp;
}

int pop(stackType *stack){
    if(stack->stackArray==NULL){
        printf("STACK IS EMPTY!\n");
        return -1;
    }
    if((stack->top-1) < 0){
        printf("STACK IS EMPTY!\n");
        stack->stackArray=NULL;
        return -1;
    }
    if(stack->top<=stack->sizeOfStack/4){
        int *temp = (int*)malloc(sizeof(int)*stack->sizeOfStack/2);
        copy(temp,stack);
        stack->sizeOfStack /= 2;
    }
    return stack->stackArray[--stack->top];
}

void push(int a,stackType *stack){
    if(stack->stackArray==NULL)
        stack->stackArray = (int*)malloc(sizeof(int)*stack->sizeOfStack);

    if(stack->top>=stack->sizeOfStack-1){
        int *temp = (int*)malloc(sizeof(int)*stack->sizeOfStack*2);
        copy(temp,stack);
        stack->sizeOfStack *= 2;
    }
    stack->stackArray[stack->top++] = a;
}

void print(stackType *stack){
    printf("The size of stack is %d\n",stack->sizeOfStack);

    if(stack->top>=0){
        for(int i=0;i<stack->top;i++){
                printf("The size of top is %d\n",stack->top);
            printf("%d. element of stack is %d ",i,stack->stackArray[i]);
        }
    }else
        printf("STACK IS EMPTY!\n");
    printf("\n");
}

void stackExample(){
    stackType *stack;
    init(&stack);
    printf("The size of top is %d\n",stack->top);
    push(10,stack);
    print(stack);
    printf("The size of top is %d\n",stack->top);
    printf("Popped ->%d\n",pop(stack));
    printf("The size of top is %d\n",stack->top);
    print(stack);
    printf("The size of top is %d\n",stack->top);
    printf("Popped ->%d\n",pop(stack));
    printf("The size of top is %d\n",stack->top);
    print(stack);

}
