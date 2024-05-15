#include<stdio.h>

int main(){
    int a,b,q,r;
    scanf("%d %d",&a,&b);
    if(a==0 && b==0){
        q=0;
        r=0;
    }
    else if(a>=0){
        if(b==0){
            q=0;
            r=0;
        }else{
            q=a/b;
            r=a%b;
        }
    }else if(a<0){
        if(b==0){
            q=0;
            r=0;
        }
        else if(b>0){
            for(int i=0; ;i--){
                if(a>=b*i){
                    q=i;
                    r=a-b*i;
                    break;
                }
            }
        }else if(b<0){
            for(int i=0; ;i++){
                if(a>=b*i){
                    q=i;
                    r=a-b*i;
                    break;
                }
            }
        }
    }
    printf("%d %d\n",q,r);
    return 0;
}