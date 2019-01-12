#include <stdio.h>
#include <string.h>
int max_or_min(int a, int b){
    int c = a>b ? a : b;
    return c;
}
int main()
{
    //数组的部分
    char arr[] = {'s','t','r','i','n','j'};
    int le = strlen(arr);
    printf("数组是%s, 数组的长度为%d %c", arr, le, '\n');
    //打印全部数值
    for(int i = 0; i < le; i++){
        printf("数组是里面第%d个char数值为%c %c", i, arr[i], '\n');
    }

    //枚举
    enum DAY {
        MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
    };
    enum DAY day;
    
    for(day = MONDAY; day < SUNDAY; day++)
    {
        printf("%d %c",day,'\n');
    }
    
    printf("%d %c", day, '\n');

    int c = max_or_min(33,66);
    printf("%d %c", c, '\n');
    return 0;
}
