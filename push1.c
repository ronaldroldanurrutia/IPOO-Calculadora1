#include<stdio.h>
int sp=0,maxval=100;
float t[100];
void push (float f){
    if(sp<maxval){
        t[sp]=f;
        sp++;
    }
    else{
        printf("Pasolalista");
    }
}
float pop(void){
    if(sp>=0){
        sp--;
        return t[sp];
    }
    else{
        printf("No hay elementos");
    }
    return 0;
}
