#include<stdio.h>
#include<windows.h>
void main(){
	while(1){
int n=20;
printf ("欢迎使用本程序\n");
scanf ("%d",&n);
switch (n){
case 1: printf("清华大学\n"); break;
case 2: printf("北京大学\n"); break;
case 3: printf("复旦大学\n"); break; 
case 4: printf("中国科技大学\n"); break;
case 5: printf("浙江大学\n"); break;
case 6: printf("上海交通大学\n"); break;
case 7: printf("南京大学\n"); break;
case 8: printf("中山大学\n"); break;
case 9: printf("武汉大学\n"); break;
case 10: printf("哈尔滨工业大学\n"); break;
case 11: printf("西南交通大学\n"); break;
case 12: printf("同济大学\n"); break;
case 13: printf("北京师范大学\n"); break;
case 14: printf("中国人民大学\n"); break;
case 15: printf("南开大学\n"); break;
case 16: printf("上海大学\n"); break;
case 17: printf("华中科技大学\n"); break;
case 18: printf("吉林大学\n"); break;
case 19: printf("北京理工大学\n"); break;
case 20: printf("北京航空航天大学\n"); break;
default: printf("输入的值错误，请输入1-20\n"); 
}
}
}
