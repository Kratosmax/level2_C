#include <stdio.h>
int main(){
    char ch;
    star: printf("������Ҫת���ַ����Իس���β��\n");
    ch = getchar();
    for(;ch != '\n';ch = getchar()){
        printf("������ַ���\"%c\"����Ӧ��ASCII����\"%d\"\n",ch,ch);
    }
    goto star;
}
