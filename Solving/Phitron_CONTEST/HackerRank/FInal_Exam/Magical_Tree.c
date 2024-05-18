#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int c = 1, b = (a + 9)/2;
    for(int i = 0; i < (a + 11) / 2; i++){
        for(int j = 0; j < c + (a+9)/2; j++){
            if(j < b)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
        c++;
        b--;
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < a+5; j++){
            if(j < 5)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}