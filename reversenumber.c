#include<stdio.h>
void main()
{
int rev=0,digit,num;
printf("....To find reverse.....\nEnter a Number:");
scanf("%d",&num);

while(num>0)
{
    digit=num%10;
    rev=rev*10+digit;
    num=num/10;
}

printf("\nThe reverse of the given number is %d",rev);

}
