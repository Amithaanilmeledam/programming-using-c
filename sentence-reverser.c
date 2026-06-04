#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct line{
      char word[100];
}words[100];
void main()
{
int i=0,j=0,k=0,t=0;
char buff[100];
printf("Enter a sentence:");
fgets(buff,sizeof(buff),stdin);
buff[strcspn(buff,"\n")]='\0';

while(buff[i]!='\0'){
              if(buff[i]!=' '){
                words[k].word[j++]=buff[i];
                i++;
               }
               else
               {
                 words[k].word[j]='\0';
                 k++;
                 j=0;
                 i++;
               }
}
words[k].word[j]='\0';

for(i=k;i>=0;i--){
   j=0;
   while(words[i].word[j]!='\0'){
   buff[t++]=words[i].word[j++];
}
 buff[t++]=' ';
}
buff[t]='\0';

printf("The given sentence in backward:%s",buff);
}
