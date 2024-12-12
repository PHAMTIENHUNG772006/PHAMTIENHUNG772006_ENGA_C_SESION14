#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main(){
    char text[20] = "hello world";
    
    text[0] = toupper(text[0]);
    
    for(int i = 1; i < strlen(text); i++){
        if(text[i-1] == ' ' && islower(text[i])){ 
            text[i] = toupper(text[i]);
        }
    }
    printf("%s", text);
    return 0;
}

