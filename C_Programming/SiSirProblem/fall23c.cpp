#include <stdio.h>

int main(){
    int n,num,sum,max=-10,pos=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=0;
        for(int j=0;j<7;j++){
            scanf("%d",&num);
            sum+=num;
        }
        if(sum>max){
            max=sum;
            pos=i;
        }
    }
    printf("Roll-%d is performer of the week.\n",pos);
}