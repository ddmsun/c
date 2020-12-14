#include<stdio.h>
#include<string.h>
void main(){
char a[30];
char b[]="宝塔镇河妖";
int c;
	printf("数字游戏，请输入密码\n");
	printf("天王盖地虎，-----------。\n");
scanf ("%s",&a);
if (strcmp(a,b)==0){
printf("游戏开始\n");
}
printf ("清输出1-20以内的数字\n");
while(1){
scanf ("%d",&c);
if (c==15){
printf("你真厉害\n");
}
else if (c>15&&c<=20){
printf("你输入的数字太大了\n");
}
else if (c>=0&&c<15){
printf("你输入的数字太小了\n");
}
else {
printf("请认真审题\n");
}
}                                                                      
}
