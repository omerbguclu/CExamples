#include <stdio.h>
#include <stdlib.h>
#include "linkedListExamples.h"

typedef struct node{
    int content;
    struct node * next;
}node;

void linkedListExamples(){

    node * root;
    root = (node*)malloc(sizeof(node));

    node * iterator;
    iterator = root;

    for(int i = 1; i<4; i++){
        iterator -> content = i*10;
        iterator = iterator -> next;
    }

    iterator = root;

    for(int i = 0; i<4; i++){
        printf("%d.element of linked list has content ->%d",i,iterator->content);
        iterator = iterator -> next;
    }

}
