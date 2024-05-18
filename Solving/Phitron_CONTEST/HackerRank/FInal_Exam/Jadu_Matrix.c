#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int V[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &V[i][j]);
        }
    }
    int yes = 1;
    if(n == m){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i == j){
                    if(V[i][j] != 1){
                        yes = 0;
                        break;
                    }
                }
                else if(i + j + 1 == n){
                    if(V[i][j] != 1){
                        yes = 0;
                        break;
                    }
                }
                else{
                    if(V[i][j] != 0){
                        yes = 0;
                        break;
                    }
                }
            }
        }
    }
    else{
        yes = 0;
    }
    if(yes == 1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}