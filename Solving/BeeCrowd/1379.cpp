#include<stdio.h>

int main(){
    int a,b,c;
    while(1){
        scanf("%d %d",&a,&b);
        if(a==0 && b==0) break;        
        c = a-(b-a);
        printf("%d\n",c);
    }
    
    return 0;
}