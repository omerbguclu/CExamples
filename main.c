#include <stdio.h>
#include <stdlib.h>

void prototype(char);
void callByValue(int);
void callByReference(int *);
void structExample(void);
void stringExample(void);
void fileExample(void);
int main()
{
//    sizeOfVariables();
//    shifting();
//    andOrParameters();
//    loops();
/*    char a;
    printf("%c",prototype(a));*/
//    pointers();
//    pointerArrays();
//    mallocExample();
/*    int a = 10;
    callByValue(a);//Value will not be change because of its coming from a method
    printf("a->%d\n",a);
    callByReference(&a);//Value will be change because we are directly point the address of a
    printf("a->%d\n",a);*/
//    structExample();
//    stringExample();
    fileExample();
}

void sizeOfVariables(){
    printf("Storage size for int : %d byte\n", sizeof(int));
    printf("Storage size for float : %d byte\n", sizeof(float));
    printf("Storage size for long : %d byte\n", sizeof(long));
    printf("Storage size for unsigned int : %d byte\n", sizeof(unsigned int));
    printf("Storage size for char : %d byte\n", sizeof(char));
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

void prototype(char a){


    printf("\n");
    printf("Prototype Example\n");
    printf("Enter a character");
    scanf("%c",&a);
    printf("a = %c\n",a);
}

void pointers(){
    printf("\n");
    int *p;
    int a=10;
    p=&a;
    printf("Pointers \n");
    printf("\n Address of p->%d",&p);
    printf("\n Content of p->%d",p);
    printf("\n Pointer of p->%d",*p);

    printf("\n Address of a->%d",&a);
    printf("\n Content of a->%d",a);
    //printf("\n Pointer of a->%d",*a);//this gives us an error due to "a" is not a pointer

    printf("\nIs &a->%d=p->%d true->%d",&a,p,&a==p);

}

void pointerArrays(){
    printf("\n");
    int d[] = {0,1,2,3,4,5,6,7,8,9};
    int *p;
    p=&d;
    printf("Pointer at Arrays \n");
    printf("4. element of d array with d[3]->%d\n",d[3]);
    printf("4. element of d array with *(p+4)->%d\n",*(p+3));
}

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

void structExample(){
    printf("\nStruct Example\n");
    typedef enum{
        male,
        female
    } gender;

    typedef struct{
        int age;
        char *name;
        gender sex;
    }human;

    human jack;
    jack.age = 25;
    jack.sex = male;
    printf("Age of Jack : %d \nGender of Jack : %u\n", jack.age,jack.sex);

    human *john;
    john = (human*)malloc(sizeof(human));
    john -> age = 30;
    john -> sex = male;
    printf("Age of John : %d \nGender of John : %u\n", john->age,john->sex);
}

void stringExample(){
    printf("\nString Example\n");

    char name[20];
    printf("Enter your name: ");
    scanf("%s",name);//we dont use the ampersand sign because of its already a pointer array

    char *surname;
    surname = (char*)malloc(sizeof(char)*40);
    printf("Enter your surname: ");
    scanf("%s",surname);//we dont use the ampersand sign because of its already a pointer array

    printf("Your name is : %s, surname is : %s",name,surname);

}

void fileExample(){
    printf("\nFile Example\n");

    FILE *file;
    char ch;
    char *buffer;
    buffer = (char*)malloc(sizeof(char)*11);

    printf("\nWriting to a file to test.txt\n");
    file = fopen("test.txt","w");
    fprintf(file,"This is a test text file.");
    fclose(file);
    printf("Done!\n");

    printf("\nReading with fscanf from test.txt\n");
    file = fopen("test.txt","r");
    printf("File content is:...\n");
    while(!feof(file)){//EOF-> End of File
        fscanf(file,"%s",buffer);
        printf("%s ",buffer);
    }
    printf("\n");
    fclose(file);
    printf("Done!\n");

    printf("\nReading from a file with EOF from test.txt\n");
    file = fopen("test.txt","r");
    while(!feof(file)){//EOF-> End of File
        ch = getc(file);
        printf("\n%c",ch);
    }
    fclose(file);
    printf("Done!\n");

    printf("\nReading with fread from test.txt\n");
    if((file=fopen("test.txt","r"))){
        fread(buffer,1,10,file);
        buffer[10]=0;
        fclose(file);
        printf("First ten character of file->%s\n",buffer);
    }else{
        printf("File can not be opened");
    }
    printf("Done!\n");

    printf("\nWriting with fwrite to test.txt\n");
    buffer = "\n123456789a";
    file = fopen("test.txt","a");
    fwrite(buffer,1,11,file);
    fclose(file);
    printf("Done!\n");

    printf("\nCursor placement at test1.txt\n");
    file = fopen("test1.txt","w");
    fputs("This is the 1st row of file.",file);
    fseek(file,10,SEEK_SET);
    fputs("INTERRUPT",file);
    fclose(file);
    printf("Done!\n");
    /*
    *SEEK_SET->From beginning
    *SEEK_CUR->From where the current is
    *SEEK_END->From ending
    */

    printf("\nLocation of cursor at test2.txt\n");
    file = fopen("test2.txt","w");
    printf("Location of cursor -> %d\n",ftell(file));
    fprintf(file,"Cursor going to end of this line.");
    printf("Writed to file -> Cursor going to end of this line.\n");
    printf("Location of cursor -> %d\n",ftell(file));
    fseek(file,10,SEEK_SET);
    printf("Cursor to 10\nWrited to file -> INTERRUPT\n");
    fprintf(file,"INTERRUPT");
    printf("Location of cursor -> %d\n",ftell(file));
    fclose(file);
    printf("Done!\n");

}


