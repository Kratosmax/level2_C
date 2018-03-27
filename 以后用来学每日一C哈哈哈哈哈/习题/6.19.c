#include <stdio.h>
int main(){
    char ch;
    star: printf("请输入要转的字符并以回车结尾：\n");
    ch = getchar();
    for(;ch != '\n';ch = getchar()){
        printf("输入的字符是\"%c\"，对应的ASCII码是\"%d\"\n",ch,ch);
    }
    goto star;
}
