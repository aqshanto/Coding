#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c){
        printf("Alex will get chocolate\n");
    }else if(b<a && b<c){
        printf("sam will get chocolate\n");
    }else{
        printf("David will get chocolate\n");
    }
}