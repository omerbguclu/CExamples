#include <stdio.h>

int counter = 1;
int secondCounter = 1;


void recursiveStepTrack(int l,int m,int r){
    printf("************************\n");
    printf("%d.Step of RECURSIVE STEP TRACK\n",secondCounter);
    printf("Left is -> %d ---- Middle is -> %d ---- Right is -> %d\n",l,m,r);
    printf("************************\n");
    secondCounter++;
}

void recursiveFunction(int left,int right,int isLeft){
    if(isLeft==1){
        printf("/////////Left Function\\\\\\\\\\\n");
    }else if(isLeft==0){
        printf("/////////Right Function\\\\\\\\\\\n");
    }
    printf("---------------------\n");
    printf("%d.Step OF RECURSIVE FUNCTION\n",counter);
    printf("Left is ->%d\nRight is ->%d\n",left,right);
    printf("---------------------\n");
    counter++;
    if(left<right){

        int middle = left+(right-left)/2;

        if(middle!=left&&middle!=right){
            recursiveFunction(left,middle,1);
        }
        if(middle!=left&&middle!=right){
            recursiveFunction(middle+1,right,0);
        }
        if(middle!=left&&middle!=right){
            recursiveStepTrack(left,middle,right);
        }

    }else{
        printf("-*-*-*-*-*-*-*-*Left >= Right-*-*-*-*-*-*-*-*\n");
    }

}

void recursiveExample(){

    int left = 0,right = 12;

    recursiveFunction(left,right,2);


}
