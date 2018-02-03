#include<stdio.h>
int paixu(int arr[]){
    int i;
    int temp;

    for(i=0;i<9;i++){
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("max=%d\n",arr[9]);
    printf("min=%d\n",arr[0]);
    return 0;
}
int main(){
    int score[10]={67,98,75,63,82,79,81,91,66,84};
    double sum;        //最低分
    double ave;         //平均分
    int i;

    for( sum = 0,i=0;i<10;i++){
        sum += score[i];
    }
    printf("总分为%0.1f\n",sum);

    ave = sum / 10;

    printf("平均分为%.1f\n",ave);
    paixu(score);
    return 0;
}
