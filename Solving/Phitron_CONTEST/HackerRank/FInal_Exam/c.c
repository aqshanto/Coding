#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int ar[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int check=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==j){
                if(ar[i][j]!=1){
                    check=0;
                    break;
                }
            }else if(i+j==n+1){
                if(ar[i][j]!=1){
                    check=0;
                    break;
                }
            }else{
                if(ar[i][j]!=0){
                    check=0;
                    break;
                }
            }
        }
        if(check==0){
            break;
        }
    }
    if(check==1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}