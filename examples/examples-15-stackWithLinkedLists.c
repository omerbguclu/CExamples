#include <stdio.h>
#include <stdlib.h>
#include "examples-15-stackWithLinkedLists.h"

node * pushLL(node *root,int content){
    if(root == NULL){
        root = (node*)malloc(sizeof(node));
        root -> content = content;
        root -> next = NULL;
        return root;
    }
    node * iterator = root;
    while(iterator -> next != NULL)
        iterator = iterator -> next;
    node * temp = (node*)malloc(sizeof(node));
    temp -> content = content;
    temp -> next = NULL;
    iterator -> next = temp;
    return root;
}

void popLL(node ** root){
    if(*root == NULL){
        printf("STACK IS EMPTY!\n");
        return;
    }
    node * iterator = *root;
    if(iterator -> next == NULL){
        int content = iterator -> content;
        *root = NULL;
        free(root);
        printf("Popped -> %d\n",content);
        return;
    }
    while(iterator->next->next != NULL)
        iterator = iterator -> next;
    node * temp = iterator->next;
    int content = temp -> content;
    iterator -> next = NULL;
    free(temp);
    printf("Popped -> %d\n",content);
}

void printLL(node * root){
    int i = 0;
    if(root !=NULL){
        node * iterator = root;
        while(iterator != NULL){
            printf("%d. element of stack is -> %d\n",i++,iterator->content);
            iterator = iterator -> next;
        }
    }else
        printf("STACK IS EMPTY!\n");
}

void stackWithLinkedList(){
    node * stack = NULL;
    stack = pushLL(stack,10);
    stack = pushLL(stack,20);
    printLL(stack);
    popLL(&stack);
    popLL(&stack);
    printLL(stack);
    stack = pushLL(stack,30);
    stack = pushLL(stack,40);
    printLL(stack);
    popLL(&stack);
    printLL(stack);
}
