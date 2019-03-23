#include <stdio.h>
#include <stdlib.h>
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
    printf("Location of cursor -> %ld\n",ftell(file));
    fprintf(file,"Cursor going to end of this line.");
    printf("Writed to file -> Cursor going to end of this line.\n");
    printf("Location of cursor -> %ld\n",ftell(file));
    fseek(file,10,SEEK_SET);
    printf("Cursor to 10\nWrited to file -> INTERRUPT\n");
    fprintf(file,"INTERRUPT");
    printf("Location of cursor -> %ld\n",ftell(file));
    fclose(file);
    printf("Done!\n");

}
