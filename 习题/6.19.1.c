#include <stdio.h>
void star(){
    printf("请输入要转的字符并以回车结尾：\n");
    char ch = getchar();
    for(;ch != '\n';ch = getchar()){
        printf("输入的字符是\"%c\"，对应的ASCII码是\"%d\"\n",ch,ch);
    }
    printf("输出结束。\n");
    return;
}

void cont(){
    char yn;
    star();
    printf("请选择是否继续(y继续，其他任意为退出): ");
    for(yn=getchar() ; yn=='y' ; yn=getchar()){
        fflush(stdin);              //清空输入缓冲区，并非所有编译器都支持其功能
        star();
        printf("请选择是否继续(y继续，其他任意为退出): ");
    }
}

int main(){
    cont();
}
