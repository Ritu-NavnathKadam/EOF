#include<stdio.h>
void main()
{

char ch;
printf("Any character or digit");

int c=0,dc=0,lc=0,uc=0,nc=0;
while(ch!='@')
{
scanf("%c",&ch);
if(ch>='0' && ch<='9')
{
dc++;
}
if(ch>='a' && ch<='z')
{
lc++;
}
if(ch>='A' && ch<='Z')
{
uc++;
}
if(ch=='\n')
{

nc++;
}

}

printf("Entered total no of digits =%d\n",dc);
printf("Entered total no of character in lowercase =%d\n",lc);
printf("Entered total no of character in lowercase  =%d\n",uc);

}
