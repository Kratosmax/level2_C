#include <stdio.h>
long Sum(int n);
int main(){
    int n=0;
    for(int i=0;i<=5;){
        printf("请输入n的值(3<=n && n<=20)\n");
        scanf("%d\n", &n);
        if(n < 3 || 20 < n){
                printf("请输入3~20之内的数字\n");
                continue;
        }else{
            printf("1!+2!+...+%d! = %ld\n",n,Sum(n));
            i++;
        }
    }
    return 0;
}

long Sum(int n){
    long sum = 0,fact = 1;
    for(int i = 1;i <= n;i++){
        fact *= i;
        sum += fact;
    }
    return sum;
}
