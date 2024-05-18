#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    long long int M,a,b,c,ans;
    for(int i=0;i<test;i++){
        scanf("%lld %lld %lld %lld",&M,&a,&b,&c);
        if(M%(a*b*c)==0){
            printf("%lld\n",M/(a*b*c));
        }else{
            printf("-1\n");
        }
    }
    return 0;
}