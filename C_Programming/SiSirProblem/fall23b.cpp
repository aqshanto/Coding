#include<stdio.h>

int main(){
    int n,x,num,sum=0;
    scanf("%d",&n);
    for(int i =0 ;i<n;i++){
        scanf("%d",&num);
        sum+=num;
    }
    scanf("%d",&x);
    if(sum>=x)
        printf("Yes,I Will qualify!\n");
    else
        printf("I am sorry!\n");
}   