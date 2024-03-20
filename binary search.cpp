#include <stdio.h>
#include <string.h>
int main() {
 char s[100];
int i,j;
 printf("Enter a string: ");
 scanf("%s", s);
 int len = strlen(s);
 for (i = 0; i < len - 1; i++) {
 for (j = 0; j < len - i - 1; j++) {
 if (s[j] > s[j + 1]) {
 char temp = s[j];
 s[j] = s[j + 1];
 s[j + 1] = temp;
 }
 }
 }
 printf("%s",s);
 return 0;
}
