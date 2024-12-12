#include <stdio.h>
#include <string.h>
int main(){
    char text[20] = "hello world";
    int n,j = 0;
    int size = strlen(text);
    printf("mang truoc khi xoa la : %s\n",text);
    printf("moi ban nhap ki tu muon xoa : ");
    scanf("%c", &n);
    for(int i=0;i<size;i++){
    	if( text[i] != n){
    		text[j++] = text[i];
		}
	}
     
    text[j] = '\0'; 
    printf("\n mang sau khi xoa la %s",text);
    return 0;
}

