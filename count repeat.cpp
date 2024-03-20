#include <stdio.h>
int main() {
char s[100];
int count[256]={0};
printf("enter the string:");
scanf("%s",&s);
for (int i =0;s[i]!='\0';i++){
	count[(int)s[i]]++;
}
printf("the sequence are:");
for(int i=0;i<256;i++){
	if(count[i]>0){
		printf("%c:%d\n",(char)i,count[i]);
	}
}
return 0;
}
