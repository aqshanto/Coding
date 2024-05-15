#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int arr[6],check[7]={0},a=0;
        for(int i=0;i<6;i++){
            scanf("%d",&arr[i]);
            check[arr[i]]++;
        }
        // for(int i=0;i<6;i++){
        //     printf("%d ",arr[i]);
        // }
        // printf("\n");
        // for(int i=1;i<7;i++){
        //     printf("%d ",check[i]);
        // }
        // printf("\n");
        for(int i=1;i<=6;i++){
            if(check[i]!=1){
                a=1;
                break;
            }
        }if(a==1){
            printf("NAO\n");
        }else if(a==0){
            if(arr[0]+arr[5]==7 && arr[1]+arr[3]==7 && arr[2]+arr[4]==7){
                printf("SIM\n");
            }else{
                printf("NAO\n");
            }
        }
    }
    return 0;
}