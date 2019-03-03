#include <stdio.h>
//#include <stdlib.h>

char prototype(char);
int main()
{
//    sizeOfVariables();
//    shifting();
//    andOrParameters();
//    loops();
//    char a;
//    printf("%c",prototype(a));
    pointers();


}

void sizeOfVariables(){
    printf("Storage size for int : %d \n", sizeof(int));
}

void shifting()
{
    printf("\n");
    int a = 10;

    printf("Left Shift\n");
    printf("a equals to 10\n");
    printf("a to left 2 times %d\n",a<<2);
    printf("a to left 3 times %d\n",a<<3);
    printf("a to left 4 times %d\n",a<<4);
    printf("a to left 5 times %d\n",a<<5);
    printf("a to left 6 times %d\n",a<<6);
    printf("a to left 7 times %d\n",a<<7);
    printf("a to left 8 times %d\n",a<<8);
    printf("a to left 9 times %d\n",a<<9);
    printf("a to left 10 times %d\n",a<<10);

    printf("\n");
    printf("Right Shift\n");
    printf("a %d\n",a>>2);
    printf("a %d\n",a>>3);
    printf("a %d\n",a>>4);
}

void andOrParameters(){
    printf("\n");
    int a = 5;
    int b = 2;
    int c = a&b;
    printf("And Or Operators \n");
    printf("c=a&b   -> %d\n",c);
    printf("b|c&2 -> %d\n",(b|c)&2);
    printf("a|b -> %d\n",a|b);
}

void loops(){
    printf("\n");
    printf("For Example\n");
    for(int i=0;i<5;i++){
        printf("This is for loop for 5 tour\n");
    }

    int a=2;

    printf("\n");
    printf("Switch Example\n");

    switch (a)
    {
        case 1:
            printf("First Case");
        case 2:
            printf("Second Case");
            break;
        case 3:
            printf("Third Case");
    }
}

char prototype(char a){


    //printf("\n");
    //printf("Prototype Example\n");
    //printf("Enter a character");
    scanf("%c",&a);
    printf("a = %c\n",a);
    return a;
}

void pointers(){
    printf("\n");
    int *p;
    int a=10;
    p=&a;
    printf("Pointers \n");
    printf("\n Address of p->%d",&p);
    printf("\n Content of p->%d",p);

    printf("\n Address of a->%d",&a);
    printf("\n Content of a->%d",a);

    printf("\nIs &a->%d=p->%d true->%d",&a,p,&a==p);

}
