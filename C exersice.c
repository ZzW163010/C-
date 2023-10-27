//10进制的加前导的十六和八进制表示
#include <stdio.h>

int main() {
    printf("%#o %#X",1234,1234);
    return 0;
}

//将一个四位数反向输出

int main() {
    int nums = 0;
    scanf("%d",&nums);
    int num = 0;
    while(nums){
        num = nums % 10;
        nums = nums / 10;
        printf("%d",num);
    }
    return 0;
}

//实现字母的大小写转换多组输入输出

#include <stdio.h>
#include <string.h>
int main() {
    int ch = 0;
    while ((ch = getchar()) != EOF) {
        int ret = tolower(ch);
        putchar(ret);
        putchar('\n');
        while ((ch = getchar()) != '\n');
    }
    return 0;
}
