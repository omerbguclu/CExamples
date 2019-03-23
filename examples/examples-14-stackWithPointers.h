#ifndef STACK_WITH_POINTERS
#define STACK_WITH_POINTERS
typedef struct s{
    int sizeOfStack;
    int top;
    int *stackArray;
}stackType;
void init(stackType **);
int pop(stackType *);
void push(int,stackType *);
void print(stackType *);

void stackExample(void);

#endif // STACK_WITH_POINTERS
