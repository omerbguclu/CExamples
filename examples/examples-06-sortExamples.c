#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createUnsortedArray(int *array,int *flags,int sizeOfArray){
    time_t t;
    int randomNumber,isThere = 1 ;

    /* Intializes random number generator */
    srand((unsigned) time(&t));

    for(int i=0;i<sizeOfArray;i++){
        flags[i]=0;
    }

    for( int i = 0 ; i < sizeOfArray ; i++ ){
        //printf("%d\n", rand() % sizeOfArray);
        isThere = 1;
        while(isThere){
            randomNumber = rand() % sizeOfArray;
            if(flags[randomNumber]==0){
                array[i] = randomNumber;
                flags[randomNumber]=1;
                isThere = 0;
            }
        }
    }
}

void bubbleSort(int *array,int sizeOfArray){
    int temp,flags,counter=0;
    for(int i=0;i<sizeOfArray-1;i++){
        flags = 1;
        for(int j=0;j<sizeOfArray-i-1;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                flags = 0;
            }
            counter++;
        }
        counter++;
        if(flags == 1)
            break;
    }
    printf("Loop count is ->%d\n",counter);
}

void printArray(int *array,int sizeOfArray){
    for(int i=0;i<sizeOfArray;i++){
        printf("%d. element of array -> %d\n",i,array[i]);
    }
}

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }

}

void sortExamples(){

    int sizeOfArray,*array,*flags;
    printf("Enter a size for array:\n");
    scanf("%d",&sizeOfArray);
    array = (int*)malloc(sizeof(int)*sizeOfArray);
    flags = (int*)malloc(sizeof(int)*sizeOfArray);


    createUnsortedArray(array,flags,sizeOfArray);
    printArray(array,sizeOfArray);

    bubbleSort(array,sizeOfArray);
    printArray(array,sizeOfArray);

    createUnsortedArray(array,flags,sizeOfArray);
    printArray(array,sizeOfArray);

    mergeSort(array,0,sizeOfArray);
    printArray(array,sizeOfArray);
}
