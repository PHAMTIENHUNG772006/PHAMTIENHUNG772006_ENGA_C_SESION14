#include<stdio.h>
int main(){
	char n;
	int cout;
	char text[]="hoc lap trinh Java";
	int size= strlen(text);
	printf("moi ban nhap ki tu can tim : ");
	scanf("%c",&n);
	for(int i=0;i<size;i++){
	    if(n == text[i]){
	    	cout++;
		}
	}
    printf(" gia tri %c duoc tim thay %d",n,cout);
return 0;
}
