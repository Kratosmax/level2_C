/*
��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿

�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�������Ȼ���ټ���5�켴����ĵڼ��죬��������������������·ݴ���3ʱ�迼�Ƕ��һ�졣
*/
#include <stdio.h>
int main(){
    int date,year,month,n,day=0;
    printf("�����������գ���ʽ20180325��\n");
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
