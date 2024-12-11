#include<stdio.h>
int main(){
	char text[]="hoc lap trinh Java";
	int size= strlen(text);
	text[0]='H';
	printf("%s",text);
	for(int i=size;i>=0;i--){
		printf("ki tu thu %d la %c \n", i, text[i]);
	}
return 0;
}
