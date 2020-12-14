#include<stdio.h>
void main(){
char a[50];
scanf("%s",&a);
if (!strcmp(a,"春节")){
printf("给我安排饺子");
}
if (!strcmp(a,"端午节")){
printf("给我安排粽子");
}
if (!strcmp(a,"中秋节")){
printf("给我安排月饼");
}
if (!strcmp(a,"元宵节")){
printf("给我安排汤圆");
}
else {
printf("什么都没有");
}                                                                       
}
