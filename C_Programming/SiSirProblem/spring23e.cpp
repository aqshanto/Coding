#include <stdio.h>

int proFun(int n){
    if(n==1){
        return 1;
    }else if(n==2){
        return 2;
    }
    return proFun(n-1)*proFun(n-2);
}

int main(){
    int n;
    scanf("%d",&n);
    int ans= proFun(n);
    printf("%d\n",ans);
}