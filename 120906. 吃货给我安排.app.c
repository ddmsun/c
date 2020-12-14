#include<stdio.h>
#include<string.h>
void main(){
char a[50];
char b[]="春节";
char c[]="端午节";
char d[]="中秋节";
char e[]="元宵节";
scanf("%s",&a);
if (strcmp(a,b)==0){
printf("给我安排饺子");
}
else if (strcmp(a,c)==0){
printf("给我安排粽子");
}
else if (strcmp(a,d)==0){
printf("给我安排月饼");
}
else if (strcmp(a,e)==0){
printf("给我安排汤圆");
}
else {
printf("你啥都没有了");
}                                                                       
}
