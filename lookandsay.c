#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    
    int n = 10, i=0, j, k, count;
    int input=1, output=1;
    char str1[100] = "11";
    char str2[100] = {"0"};
    
    printf("string %s \n", str1);
    
    while(i<n) {
        k=0;
        count=1;
        for(j=0;j<strlen(str1)-1;j++) {
            if(str1[j]==str1[j+1]) {
                count++;
            }
            else {
                if(count>1) {
                    str2[k++] = count + '0';
                    str2[k++] = str1[j];
                    count = 1;
                } else {
                    str2[k++] = 1 + '0';
                    str2[k++] = str1[j];
                }
                continue;
            }
        }
        if(count>1) {
            str2[k++] = count + '0';
            str2[k++] = str1[j];
        }
        else {
            str2[k++] = 1 + '0';
            str2[k++] = str1[j];
        }
        
        printf("%s\n", str2);
        strcpy(str1,str2);
        i++;
    }
        
    
        
    return 0;
}

