/*Practice Qs 53
    Write a function to count the occurrence of vowels in a string.*/

#include<stdio.h>
#include<string.h>

int countVowel(char str[]);

int main(){
    char str[100] ="HelloWorld";
    printf("Vowels are:%d", countVowel(str));
    return 0;
}


int countVowel(char str[]){
    int count =0;
    for (int i =0; str[i]!= '\0'; i++){
        if (str[i] =='a' || str[i] =='e' || str[i]== 'i' || str[i] =='o' || str[i] =='u')
        count++;
    }
    return count;
}