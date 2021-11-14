//自动关机程序
#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 

int main(void)
{
    char a[20] = { 0 }; 
    system("shutdown -s -t 120");

    while (1)
    {
        printf("请输入：我真好看,否则电脑将在两分钟后关闭\n");
        scanf_s("%s", a, sizeof(a));

        if (strcmp(a, "我真好看") == 0) {
            system("shutdown -a");
            printf("你就是这么好看！！!\n");
            break;
        }
    }
    return 0;
}