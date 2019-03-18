#include <stdio.h>

float cumsum(unsigned int num){
    if (num <= 1) {
        return 1;
    }else{
        return num * cumsum(num-1);
    }
}   
int main(int argc, char const *argv[]){
    float number;
    int num=6;
    number=cumsum(num);
    printf("The cumsum of %d is %f",num, number);
    return 0;
}