#include<stdio.h>
void main(){
char n;
printf("靓仔靓女们，欢迎使用此程序\n");
scanf("%c",&n);
switch(n){
case 'a':printf("你在点击‘左’键\n");break; 
case 'd':printf("你在点击‘右’键\n");break; 
case 'w':printf("你在点击‘上’键\n");break; 
case 's':printf("你在点击‘下’键\n");break; 
default:printf("大佬，输入错误\n");
}
}
