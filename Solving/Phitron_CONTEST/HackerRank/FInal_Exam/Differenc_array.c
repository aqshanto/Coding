#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        int b;
        scanf("%d", &b);
        int A[b], B[b], C[b];
        for(int j = 0; j < b; j++){
            scanf("%d", &A[j]);
            B[j] = A[j];
        }
        for(int l = 0; l < b - 1; l++){
            for(int k = l+1; k < b; k++){
                if(B[l]> B[k]){
                    int temp = B[l];
                    B[l] = B[k];
                    B[k] = temp;
                }
            }
        }
        for(int m = 0; m < b; m++){
            if(A[m] > B[m]){
                C[m] = A[m] - B[m];
            }else{
                C[m] = B[m] - A[m];
            }
        }
        for(int n = 0; n < b; n++){
            printf("%d ", C[n]);
        }
        printf("\n");
    }
    return 0;
}