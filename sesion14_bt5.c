#include<stdio.h>
void str(char str[100], int letter){
	for(int i=0;i<strlen(str);i++){
		if(str[i] == ' '){
			letter++;
		}
	}
	printf("\n Chuoi ban nhap gom %d ki tu",letter+1);
}


int main(){
	char str[100];
	int letter = 0;
	printf("moi ban nhap chuoi : ");
	fgets(str,100,stdin);
	str(str,letter);
	return 0;
}
