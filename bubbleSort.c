#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {22,34,43,46,23,13,5,67,86};
    int len = sizeof(arr)/sizeof(int);
    for(int i = 1; i < len; i++){
        for(int j = 0; j < (len - i); j++){
            if(arr[j] > arr[j+1]){
                int tem = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tem;
            }
        }
    }

    for(int i = 0; i < len; i++){
        printf("No.%d number is %d \n",i,arr[i]);
    }
    return 0;
}
