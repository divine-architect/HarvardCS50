#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string word = get_string("Enter string: ");
    int length = strlen(word);
    for(int i=0;i<length;i++){
        if(word[i]>word[i+1]){
            printf("No \n");
        }
        else{
            printf("Yes \n");
        }
    }
}
