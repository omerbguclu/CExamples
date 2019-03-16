#include <stdio.h>
#include <stdlib.h>
void binarySearch(){
    unsigned int searchNumber,searchLowNumber,searchHighNumber,isNumber,counter = 1;
    unsigned int searchMidNumber;

    printf("Give a number for search in it\n");
    scanf("%u",&searchNumber);
    printf("Keep a number from your mind 0 to %u\n",searchNumber);
    searchHighNumber = searchNumber;
    searchMidNumber = searchNumber/2;
    searchLowNumber = 0;
    while(1){
	    printf("Is your number %u (True->1 False->0)\n",searchMidNumber);
		scanf("%u",&isNumber);
		if(isNumber){
			printf("I found at %u. try and your number is %u\n",counter,searchMidNumber);
			break;
		}else{
			printf("Is your number above or below %u (Above->1 Below->0) \n",searchMidNumber);
			scanf("%u",&isNumber);
			if(isNumber){
				searchLowNumber = searchMidNumber;
				searchMidNumber = searchLowNumber + (searchHighNumber - searchLowNumber)/2;
			}else{
				searchHighNumber = searchMidNumber;
				searchMidNumber = searchLowNumber + (searchHighNumber - searchLowNumber)/2;
			}
			counter++;
		}
    }

}
