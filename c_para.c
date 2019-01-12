#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    printf("the name of the program is %s \n", argv[0]);
    if(argc == 2){
        printf("only one parameter has passed %s\n", argv[1]);
    }else{
        for(int i = 1; i <= strlen(argv); i++){
            printf("No.%d parameter is %s %c", i, argv[i], '\n');
        }
    }

    return 0;
}
// This file contains the parameters passed to the script and processd