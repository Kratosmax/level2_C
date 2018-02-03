#include <stdio.h>
double getMoney(int km ,int time){
    double dj = 2.3;   //单价
    int qbj = 13;   //起步价
    int f =1;       //附加税
    double sum = 0.0;        //总金额

    if(time > 24||time < 0){
        printf("时间错了\n");
        return 0;
    }else if(time >= 23 || time < 5){
        qbj = qbj*1.2;
    }

    if(km < 0 ){
        printf("距离出错了");
    }else if(km <= 3){
        sum = qbj;
    }else{
        sum = qbj + dj*(km-3);
    }
    sum = sum + f;
    return sum;
}

int main(){
    int km = 12;
    int sb = 4;     //上班时间
    int xb = 18;    //下班时间
    double paySb = getMoney(km,sb);
    double payXb = getMoney(km,xb);
    printf("上班时间为%d点，下班时间为%d点,离家%d公里\n\n",sb,xb,km);
    printf("上班费用为%.2f，下班费用为%.2f\n\n",paySb,payXb);
}
