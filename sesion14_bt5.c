#include<stdio.h>
int main(){
	int count;
	char text[]="hoc lap trinh Java";
	int size = strlen(text);
	for(int i=0;i<size;i++){
		if( i == "     "){
			count++;
		}
	}
	printf(" trong chuoi text gom co %d chuoi con", count);
return 0;
}
