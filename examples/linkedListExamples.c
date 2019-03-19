#include <stdio.h>
#include <stdlib.h>

#define MULTIPLIER 10

typedef struct node{
    int content;
    struct node * next;
}node;

node * fillLinkedList(node *root,int sizeOfLinkedList,int multiplier){
    if(root==NULL)
        root = (node*)malloc(sizeof(node));

    node * iterator;
    iterator = root;
    int i = 1;

    while(i<=sizeOfLinkedList){
        iterator -> content = i*multiplier;
        if(i++ == sizeOfLinkedList){
            iterator -> next = NULL;
        }else{
            iterator -> next = (node*)malloc(sizeof(node));
            iterator = iterator -> next;
        }
    }
    return root;
}

node * addSequentially(node *root,int content){
    if(root == NULL){   //If linked list is empty
        root = (node*)malloc(sizeof(node));
        root -> content = content;
        root -> next = NULL;
    }else if(root->next == NULL){   //If the next element is NULL so we have only one element in the linked list
        root -> next = (node*)malloc(sizeof(node));
        if(root->content > content){
            root -> next -> content = root -> content;
            root -> content = content;
        }else {
            root -> next -> content = content;
        }
        root -> next -> next = NULL;
    }else{
        node *temp,*iterator;
        temp = (node*)malloc(sizeof(node));
        iterator = (node*)malloc(sizeof(node));
        iterator = root;

        while(iterator->next != NULL && iterator->content < content){ //We iterate the linked list for the right place to add a new element
            if(iterator->next->content < content){ //If the next element is less than the added number we iterate if it is not we have to stop
                iterator = iterator -> next;
            }else
                break;
        }

        if(iterator->next == NULL){ //If we are on the last element of the linked list
            iterator -> next = (node*)malloc(sizeof(node));
            if(iterator->content > content){
                iterator -> next = (node*)malloc(sizeof(node));
                iterator -> next -> content = iterator -> content;
                iterator -> content = content;
            }else {
                temp -> next = iterator -> next;
                iterator -> next = temp;
                temp -> content = content;
            }
            iterator -> next -> next = NULL;
        }else{
            if(root->content > content){ //If added number is less than root(first element of the linked list)
                temp -> next = root -> next;
                root -> next = temp;
                temp -> content = content;
                swap(root,temp);
            }else{  //If added number will add somewhere in the middle
                temp -> next = iterator -> next;
                iterator -> next = temp;
                temp -> content = content;
            }
        }
    }
    return root;
}

void printLinkedList(node *root){
    node * iterator;
    iterator = root;
    int i = 0;
    while(iterator != NULL){
        printf("%d.element of linked list has content ->%d\n",i++,iterator->content);
        iterator = iterator -> next;
    }
}

void addToEnding(node *root,int content){

    if(root == NULL){
        root = (node*)malloc(sizeof(node));
        root -> next = NULL;
        root -> content = content;
    }else{
        node * iterator;
        iterator = root;
        while(iterator !=NULL){
            if(iterator->next == NULL){
                iterator->next = (node*)malloc(sizeof(node));
                iterator -> next -> content = content;
                iterator -> next -> next = NULL;
                break;
            }
            iterator = iterator -> next;
        }
    }
}

void removeFromEnding(node *root){
    node * iterator;
    iterator = root;

    while(iterator !=NULL){
        if(iterator->next->next == NULL){
            iterator->next = NULL;
            break;
        }
        iterator = iterator -> next;
    }
}

void changeContent(node *root,int index,int content){
    node * iterator;
    iterator = root;

    int i = 0;
    while(i != index){
        iterator = iterator -> next;
        if(++i == index){
            iterator -> content = content;
            break;
        }
    }
}

void insertToLL(node *root,int whereTo,int content){
    node * iterator;
    iterator = root;
    int i = 0;
    while(i != whereTo){
        if(++i == whereTo){
            node * temp;
            temp = (node*)malloc(sizeof(node));

            temp -> next = iterator -> next;
            iterator -> next = temp;
            temp -> content = content;
            break;
        }
        iterator = iterator -> next;
    }
}

void swap(node *a, node *b){
    int temp = a->content;
    a->content = b->content;
    b->content = temp;
}

void bubbleSortLinkedList(node *root){
    node * iterator;
    iterator = root;
    int sizeOfLL=0,first,second,flag;

    while(iterator != NULL){
        iterator = iterator -> next;
        sizeOfLL++;
    }

    for(int i=0;i<sizeOfLL;i++){
        iterator = root;
        flag = 1;
        for(int j = 0;j<sizeOfLL-i-1;j++){
            first = iterator -> content;
            second = iterator -> next -> content;
            if(first > second ){
                //changeContent(root,j,second);
                //changeContent(root,j+1,first);
                swap(iterator,iterator->next);
                flag = 0;
            }
            iterator = iterator -> next;
        }
        if(flag)
            break;
    }
}

void linkedListExamples(){

    node * root;
    //root = (node*)malloc(sizeof(node));
    root = NULL;

    root = fillLinkedList(root,2,MULTIPLIER);
    root = addSequentially(root,9);
    root = addSequentially(root,15);
    root = addSequentially(root,450);
    root = addSequentially(root,385);
    printLinkedList(root);
    //root = fillLinkedList(root,3,MULTIPLIER);
    //printLinkedList(root);
    addToEnding(root,40);
    addToEnding(root,50);
    addToEnding(root,70);
    printf("-------------------------\n");
    printLinkedList(root);
    removeFromEnding(root);
    printf("-------------------------\n");
    printLinkedList(root);
    insertToLL(root,2,2000);
    insertToLL(root,2,1500);
    insertToLL(root,2,1800);
    insertToLL(root,2,900);
    printf("-------------------------\n");
    printLinkedList(root);
    printf("-------------------------\n");
    bubbleSortLinkedList(root);
    printf("-------------------------\n");
    printLinkedList(root);

}

