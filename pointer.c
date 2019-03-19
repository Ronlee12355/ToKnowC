#include <stdio.h>
int main(int argc, char const *argv[])
{
    int var[]={22,55,44,324,5441,45};
    int *ip, i;
    int max = sizeof(var)/sizeof(int);
    ip=var;
    for(i = 0; i < max; i++)
    {
        printf("address of var[%d] is %x\n", i, ip);
        printf("value of var[%d] is %d\n", i, *ip);

        ip++;
    }

    return 0;
}
