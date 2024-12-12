#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(){
	char str[]="Hellomygmailistest123@gmail.com\n";
    int countCharText=0;
    int countCharNumber=0;
    int countCharSpecial=0;
    int size = strlen(str);
    for(int i=0;i<size;i++){
    	if(isalpha(str[i])){
    		countCharText++;
		} else if(isdigit(str[i])){
			countCharNumber++;
		}
	}
    printf("\n so luong ki tu la chu cai trong chuoi la %d", countCharText);
    printf("\n so luong ki tu la so trong chuoi la %d", countCharNumber);
    printf("\n so luong ki tu la chu cai dac biet trong chuoi la %d", size-countCharText-countCharNumber);
    return 0;
    
}
