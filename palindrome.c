#include<stdio.h>
#include<string.h>
int main(){
char str[100];
int i,len;
printf("\nEnter a string:");
scanf("%s",str);

len=strlen(str);

for(i=0;i<len/2;i++)
    if(str[i]!=str[len-1-i]){
          printf("\n%s is not palindrome",str);
          return 0;
     }
printf("\n%s is palindrome",str);

return 0;
}
