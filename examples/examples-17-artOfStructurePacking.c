#include <stdio.h>

typedef struct a8
{
  char c;
  long x;
  char *p;
} b8;

typedef struct a4{
    int a;
    char c;
}b4;

typedef struct a2{
    short s;
    char c;
}b2;

typedef struct a16{
    char c;
    struct a16_inner{
        char *p;
        short x;
    }inner;
        struct a17_inner{
        char *p;
        short x;
    }inner1;
}b16;

typedef struct aligned{
    char *p;
    int a;
    short x;
    char c;
}aligned;

void structurePacking(){
    long double ld;
    printf("Long double size of -> %d\n", sizeof(ld));
    printf("char long char* -> %d\n", sizeof(b8));
    printf("int char - > %d\n", sizeof(b4));
    printf("short chart -> %d\n", sizeof(b2));
    printf("char struct(char* short) -> %d\n", sizeof(b16));
    printf("char* int short char -> %d\n", sizeof(aligned));
}
