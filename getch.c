#include<stdio.h>
char buf[100];
int bufp=0;
int getch(void){
    return (bufp>0)?buf[--bufp]: getchar();
}
void ungetch(int c){
    if(bufp>=100){
        printf("Mucho");
    }
    else{
        buf[bufp++]=c;
    }
}
