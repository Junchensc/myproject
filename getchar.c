//
// Created by Administrator on 2019/3/7.
//

#include <stdio.h>

int main() {

    char c;
    int nums = 0, letters = 0, spaces = 0, others = 0;
    printf("������һЩ�ַ���:\n");
    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else if (c >= '0' && c <= '9')
            nums++;
        else if (c == ' ')
            spaces++;
        else
            others++;
    }
    printf("��������ַ����к�������:%d,��ĸ:%d,�ո�:%d,����:%d", nums, letters, spaces, others);
}