
#include <stdio.h>

int main() {
	
    unsigned long n ;
    printf("Enter number from 1 to 8 digit\n");
    scanf("%d", &n);
    if(n > 99999999)
    {
        printf("Enter value in range 0 to 99999999 \n");
        return 0;
    }
    int remainder = 0;
    unsigned long temp = n;
    int sum = 0;
    while (temp >= 10){
        remainder = temp%10;
        temp = temp/10;
        sum += remainder;
        printf("remainder:%d temp:%d sum:%d \n", remainder, temp, sum);
    }
    sum += temp;
    printf("sume is %d \n",sum);
    return 0;
}