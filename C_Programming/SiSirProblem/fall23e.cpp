#include <stdio.h>

int sumDigit(int n,int sum){
    if(n==0){
        return sum;
    }
    sum=sum+(n%10);
    return sumDigit(n/10,sum);
}

int main(){
    int n;
    scanf("%d",&n);
    int ans =sumDigit(n,0);
    printf("%d\n",ans);
}