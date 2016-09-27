#include<stdio.h>
#include "push1.c"
#include "gettop.c"
main(){
    float p2;
    char a;
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
            case '1':
                push(numero);
                break;
            case '\n':
                printf("%f",pop());
                break;
        }
    }
    return 0;
}
