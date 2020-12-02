#include<stdio.h>
void main(){
int a;
printf("输入秒数\n");
scanf ("%d",&a);
printf ("%d时",a/3600);
printf ("%d分",(a%3600)/60);
printf ("%d秒",a-(a/3600)*3600-(a%3600)/60*60);
}
