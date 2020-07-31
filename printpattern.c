/*

Problem statement:
For a given number print the output in a particular pattern. 
Please refer the expected input/output example below

For input 1:
output::
1

For Input 2:
Output::             
2 2 2
2 1 2
2 2 2

For input 3:
Output::
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3

For input 4:
Output::
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

So on.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Function to print the numbers for each row of the output.
void printNum(int num, int n)
{
    //code to print the first few numbers before the repeated numbers.
    int temp=n;
    while (temp != num)
    {
        printf("%d ", temp);
        temp--;
    }
    
    //run a loop to print the number for 2*n-2 times
    for (int i = 0; i < (2 * num -2); i++)
        printf("%d ", num);

    //code to print the remaining number till the given number
    temp = num;
    while (temp <= n)
    {
        printf("%d ", temp);
        temp++;
    }
}
//Main function to execute the program to print the pattern for given number.
int main(){
    int n;
    printf("Enter the Number to print pattern for: ");
    scanf("%d", &n);
    int i;
    // run a loop to print the top half of the output pattern.
    for(i = 0; i < n-1; i++){
        printNum(n-i, n);
        printf("\n");
    }
    // run a loop to print the botton half of the output pattern.
    for(i = n-1; i >= 0; i--){
        printNum(n-i, n);
        printf("\n");
    }
    return 0;
}
