#include <stdio.h>

int main(){
    int money,amount,price,sum=0;
    scanf("%d %d",&money,&amount);
    for(int i=0;i<amount;i++){
        scanf("%d",&price);
        sum+=(price%100);
    }
    if(money>=sum){
        printf("Yes!!Yes!! here we go\n");
    }else{
        printf("OH!,No\n");
    }
}