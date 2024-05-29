#include<stdio.h>

int main(){
    int t,pos;
    scanf("%d",&t);
    float min=1000,hour[t][3],sum=0.0;
    for(int i=0;i<t;i++){
        for(int j=0;j<3;j++){
            scanf("%f",&hour[i][j]);
            sum+=hour[i][j];
        }
        if((sum/3)<min){
            min=sum/3;
            pos=i;
        }
    }
    printf("%0.2f\n",min);
    printf("%0.1f %0.1f %0.1f\n",hour[pos][0],hour[pos][1],hour[pos][2]);
    return 0;
}