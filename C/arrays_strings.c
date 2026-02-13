#include <stdio.h>
void printString(char str[]){
    int i =0;
    while(str[i]!='\0'){
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
    }
    int main(){
        char s[]="CODE";
        printString(s);
        return 0;
    }

