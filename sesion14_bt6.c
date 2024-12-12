#include<stdio.h>
void str(){
	char a[20]="ds78d7c98sd#22FSDF";
	int count = 0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a' && a[i]<='z') count++;
		if(a[i]>='A' && a[i]<='Z') count++;
	}
	printf(" so ki tu co trong chuoi la %d", count);
}
int main(){
	str();
	return 0;
}
