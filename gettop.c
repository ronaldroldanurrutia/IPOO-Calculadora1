#include<ctype.h>
#include "getch.c"
int getch(void);
void ungetch(int);
int gettop(char s[]){
    int i,c;
    while(s[0]=c=getchar() ==' ' || c=='\t');
    s[1]='\0';
    if(!isdigit(c) && c!='.'){
        return c;
    }
    i=0;
    if(isdigit(c)){
        while(isdigit(s[++i]=c=getch()));
    }
    if(c=='.'){
        while(isdigit(s[++i]=c=getch()));
    }
    s[i]='\0';
    if(c!=EOF){
        ungetch(c);
    }
    return 1;
}
