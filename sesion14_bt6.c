#include<stdio.h>

int main(){
	char fullName[]="pham tien hung";
	int	size= strlen(fullName);
	printf("%d",size);
	for(int i=0;i<size-1;i++){
	printf("ki tu thu %d la :%c\n",i+1,fullName[i]);
	
}
	return 0;
}
