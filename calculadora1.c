#include<stdio.h>
int sp=0,maxval=100;
float t[100],numero;
char s[100];
char gettop(void){
    int i=0;
    char c;
    scanf("%c",&c);
    while(c==' ' || c=='\t'){
        scanf("%c",&c);
    }
    if(c<'0' || c>'9'){
        return c;
    }
    float power=1,val=0;
    for(;c>='0' && c<='9';){
        val=(val*10)+(c-'0');
        scanf("%c",&c);
    }
    if(c=='.'){
        scanf("%c",&c);
    }
    for(;c>='0' && c<='9';){
        val=(val*10)+(c-'0');
        power*=10;
        scanf("%c",&c);
    }
    if(c!=' ' && c!='\t'){
        return 'h';
    }
    numero=val/power;
    return '1';
}
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
    return -1;
}
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
