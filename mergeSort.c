#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createUnsortedArray(int *array,int *control,int sizeOfArray){
    time_t t;
    int randomNumber,isThere = 1 ;

    /* Intializes random number generator */
    srand((unsigned) time(&t));

    for(int i=0;i<sizeOfArray;i++){
        control[i]=0;
    }

    for( int i = 0 ; i < sizeOfArray ; i++ ){
        //printf("%d\n", rand() % sizeOfArray);
        isThere = 1;
        while(isThere){
            randomNumber = rand() % sizeOfArray;
            if(control[randomNumber]==0){
                array[i] = randomNumber;
                control[randomNumber]=1;
                isThere = 0;
            }
        }
    }
}

void sortArray(int *array,int sizeOfArray){
    int temp,control,counter=0;
    for(int i=0;i<sizeOfArray-1;i++){
        control = 1;
        for(int j=0;j<sizeOfArray-i-1;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                control = 0;
            }
            counter++;
        }
        counter++;
        if(control == 1)
            break;
    }
    printf("Loop count is ->%d\n",counter);
}

void printArray(int *array,int sizeOfArray){
    for(int i=0;i<sizeOfArray;i++){
        printf("%d. element of array -> %d\n",i,array[i]);
    }
}

void mergeSort(){

}

void merge(){

}

void mergeSortRun(){

    int sizeOfArray,*array,*control;
    printf("Enter a size for array:\n");
    scanf("%d",&sizeOfArray);
    array = (int*)malloc(sizeof(int)*sizeOfArray);
    control = (int*)malloc(sizeof(int)*sizeOfArray);


    createUnsortedArray(array,control,sizeOfArray);
    printArray(array,sizeOfArray);
    sortArray(array,sizeOfArray);
    printArray(array,sizeOfArray);
}
