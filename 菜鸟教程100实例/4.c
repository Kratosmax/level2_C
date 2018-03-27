/*
题目：输入某年某月某日，判断这一天是这一年的第几天？

程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。
*/
#include <stdio.h>
int main(){
    int date,year,month,n,day=0;
    printf("请输入年月日，格式20180325：\n");
    scanf("%4d%2d%2d",&year,&month,&date);
    switch (month) {
        case 12: day + 31;
        case 11: day + 30;
        case 10: day + 31;
        case 9: day + 30;
        case 8: day + 31;
        case 7: day + 30;
        case 6: day + 31;
        case 5: day + 30;
        case 4: day + 31;
        case 3: day + 30;
        case 2: if(year%100!=0&&year%4==0){
            day + 29;
        }else{
            day + 28;
        }
        case 1: day + 31;
    }
}
