#include<stdio.h>
#include<conio.h>
void main()
{
float a=10.0, b=20.0, res=0.0;
char ch;
printf("enter the operation\n");
scanf("%c",ch);
switch(ch)
{
case '+':res=a+b;
break;
case '-':res=a-b;
break;
case '*':res=a*b;
break;
case '/':res=a/b
break
default:printf("invalid operation\n");
exit(0);
}
printf("res=%f",res);
getch();
}
