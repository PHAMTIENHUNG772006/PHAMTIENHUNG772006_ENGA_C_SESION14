#include <stdio.h>
#include <string.h>
int main(){
    char text[20] = "abcdc";
    int count=0,count1=0,count2=0,count3=0;
    int a,b,c,d;
    for(int i = 0; i < strlen(text);i++){
    	if(text[i] == 'c'){
    		count++;
    	}
    }
    for(int i = 0; i < strlen(text);i++){		
     	if(text[i] == 'a'){
			count1++;
		}
    }
	for(int i = 0; i < strlen(text);i++){
		if(text[i] == 'b'){
			count2++;
		}
	for(int i = 0; i < strlen(text);i++){
		if(text[i] == 'd'){
			count3++;
	    	}
		}
	}
	printf("%d\n",count);
	printf("%d\n",count1);
	printf("%d\n",count2);
	printf("%d\n",count3);
    return 0;
}

