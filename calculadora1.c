#include<stdio.h>
#include<stdlib>
#include "calc.h"
main(){
    int a;
    float p2;
    char s[100];
    while((a=gettop())!=EOF){
        switch(a){
            case '+':
                push(pop()+pop());
                break;
            case '*':
                push(pop()*pop());
                break;
            case '-':
                p2=pop();
                push(pop()-p2);
                break;
            case '/':
                p2=pop();
                if(p2!=0){
                    push(pop()/p2);
                }
                else{
                    printf("ERR");
                }
                break;
            case 1:
                push(atof(s));
                break;
            case '\n':
                printf("%f\n",pop());
                break;
        }
    }
    return 0;
}
