#include <stdio.h>
#include <stdlib.h>
#include "examples-12-linkedListExamples.h"

void add(node *root,int content){
    node *iterator = root;
    while(iterator->next!=root){
        iterator = iterator -> next;
    }
    iterator->next = (node*)malloc(sizeof(node));
    iterator->next->content = content;
    iterator->next->next = root;
}

static node *addSequentially(node *root,int content){
    if(root == NULL){
        root = (node*)malloc(sizeof(node));
        root -> content = content;
        root -> next = root;
        return root;
    }
    if(root->content > content){
        node * temp = (node*)malloc(sizeof(node));
        temp -> content = content;
        temp -> next = root;
        return temp;
    }
    node * temp = (node*)malloc(sizeof(node));
    node * iterator = root;
    while(iterator -> next != root && iterator->next->content < content){
        iterator = iterator -> next;
    }
    temp -> next = iterator -> next;
    iterator -> next = temp;
    temp -> content = content;
    return root;
}

static void print(node *root){
    node * iterator = root;
    printf("0. node of linked list has %d content\n",iterator->content);
    iterator = iterator -> next;
    int i = 1;
    while(iterator != root){
        printf("%d. node of linked list has %d content\n",i++,iterator->content);
        iterator = iterator->next;
    }
}

void circularLinkedList(){
    node * root;
    //root = (node*)malloc(sizeof(node));
    root = NULL;
    /*root -> content = 40;
    root -> next = root;
    add(root,50);
    add(root,12);
    add(root,62);
    add(root,46);
    print(root);
    printf("-------------EOP-------------\n");*/
    root = addSequentially(root,22);
    root = addSequentially(root,100);
    root = addSequentially(root,32);
    root = addSequentially(root,98);
    root = addSequentially(root,101);
    print(root);
    printf("-------------EOP-------------\n");
}
