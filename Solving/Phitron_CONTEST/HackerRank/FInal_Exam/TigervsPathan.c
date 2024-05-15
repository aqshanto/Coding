#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int length,tiger=0,pathan=0;
        scanf("%d",&length);
        char str[length];
        scanf("%s",str);
        for(int i=0;i<length;i++){
            if(str[i]=='T'){
                tiger++;
            }else if(str[i]=='P'){
                pathan++;
            }
        }
        if(tiger==pathan){
            printf("Draw\n");
        }else if(tiger>pathan){
            printf("Tiger\n");
        }else if(pathan>tiger){
            printf("Pathaan\n");
        }
    }
    return 0;
}