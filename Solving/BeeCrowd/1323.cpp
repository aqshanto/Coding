#include<stdio.h>
#include<math.h>

int main(){
    int num;
    while(1){
        scanf("%d",&num);
        if(num==0){
            break;
        }
        int sum=0;
        for(int i=1;i<=num;i++){
            sum+=(i*i);
        }
        printf("%d\n",sum);
    }
    return 0;
}
