/*Practice Qs 69
    Create an array of size 5(using Calloc) & enter its values from the user.*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) calloc (5, sizeof(int));
    for (int i =0; i <5; i++){
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("number %d is %d\n", i , ptr[i]);
    }
    return 0;
    
}