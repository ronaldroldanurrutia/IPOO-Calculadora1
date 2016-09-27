#include<stdio.h>
#include<calc.h>
float numero;
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
    numero=val/power;
    return '1';
}

