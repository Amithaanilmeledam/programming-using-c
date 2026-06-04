#include<stdio.h>
#include<string.h>
void main(){
int len,i;
char str[100],rev[100];

printf("......To find reverse.....\nEnter a string:");
scanf("%s",str);

len=strlen(str);

for(i=0;i<len;i++)
  rev[i]=str[len-1-i];
printf("\nThe Reverse of the given string=%s",rev);
}
