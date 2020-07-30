#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...) {
    int sum =0;
    va_list ap;
    va_start(ap, count);
    for(int i = 2; i <= count; i++)
    {
        int tmp = va_arg(ap, int);
        sum += tmp;
    printf("Sum:: Value at pos:%d is %d sum:%d \n", i, tmp, sum);
    }
    va_end(ap);
    return sum;
}

int min(int count,...) {
    int min= MAX_ELEMENT;
    va_list ap;
    va_start(ap, count);
    for(int i = 2; i <= count; i++){
        int temp = va_arg(ap, int);
        if(min > temp)
            min = temp;
        printf("Min:: Value at pos:%d is %d Min:%d\n", i, temp, min);
    }
    va_end(ap);
    return min;
}

int max(int count,...) {
    int max = MIN_ELEMENT;
    va_list ap;
    va_start(ap, count);
    for(int i = 2; i <= count; i++){
        int temp = va_arg(ap, int);
        if(max < temp)
            max = temp;
        printf("Max:: Value at pos:%d is %d Max:%d\n", i, temp, max);
    }
    va_end(ap);
    return max;
}


int main()
{
    int fsum=0;
    int fmin = 0;
    int fmax = 0;
    fsum = sum(5, 10, 20, 30, 40);
    fmin = min(9, 11,12,13,14,19,16,10,15);
    fmax = max(4, 121, 135, 111);

    printf("Main:: sum:%d min:%d max:%d \n", fsum, fmin, fmax);

    return 0;
}