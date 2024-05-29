#include <stdio.h>
#include <string.h>

int main(){
    char ch[100000];
    scanf("%s",ch);
    int size = strlen(ch);
    for(int i=0;i<size;i++){
        ch[i]=ch[i]+5;
    }
    printf("%s\n",ch);
}