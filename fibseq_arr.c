/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define MAX 50

int scan_array(int arr[9], int length)
{
    int i, max=0;
    printf("length = %d\n",length); 
    
    for(i=0;i<length;i++)
        if(arr[i] > max)
            max = arr[i];
    printf("max = %d\n",max); 
    return max;
}

void gen_fib(int t[100], int largest)
{
    int i =0;
    t[0] = 0;
    t[1] = 1;
    
    i=2;
    printf("gen_fib %d\n", largest);
    
    while((t[i] < largest)) {
        if(i >=10)
            break;
        t[i] = t[i-1] + t[i-2];
        printf("%d  ",t[i]);
        i++;
    }
    printf("\n");
    return;
}

void fib_match(int arr[9], int t_[100], int length)
{
    int i, j, t_len;
    
    t_len = sizeof(t_)/sizeof(t_[0]);
    for(i=0;i<length;i++) {
        for(j=0;j<10;j++)
        {
            //printf("%d %d\n", arr[i], t_[j]);
            if(arr[i] == t_[j]) {
                printf("%d\n",arr[i]);
                break;
            }
        }
    }
}
int main()
{
    int in_array[9] = {0, 2, 8, 5, 2, 1, 4, 13, 23};
    int temp[100] = {0};
    int largest = 0, length;
    
    length = sizeof(in_array)/sizeof(in_array[0]);
    largest = scan_array(in_array, length);
    
    gen_fib(temp, largest);
    
    fib_match(in_array, temp, length);
    
    return 0;
}
