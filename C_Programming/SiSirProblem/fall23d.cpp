#include<stdio.h>
#include<string.h>

int main(){
    char ch[100010],x,y;
    scanf("%s",ch);
    scanf(" %c %c",&x,&y);
    int size=strlen(ch);
    for(int i=0;i<size;i++){
        if(ch[i]==x){
            ch[i]=y;
        }
    }
    printf("%s\n",ch);
}