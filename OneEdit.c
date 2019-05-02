/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word1[25];
    char word2[25];
    
    int lettercount1[26] = {0};
    int lettercount2[26] = {0};
    
    int diff_count = 0;
    int i;
    
    printf("Hello World\n");
    scanf("%s %s", word1, word2);
    
    printf("%s %s %d %d\n", word1, word2, word1[0], word2[0]);
    
    if (abs(strlen(word1) - strlen(word2)) > 1) {
        printf("Not one edit away\n");
        return 0;
    } else {
        printf("May be one edit away!\n");
    }
    
    for(i=0; i< strlen(word1); i++) {
        lettercount1[word1[i] - 'a']++;
        //printf("count of %c is %d\n", word1[i], lettercount1[word1[i] - 'a']);
    }
        
    for(i=0; i< strlen(word2); i++) {
        lettercount2[word2[i] - 'a']++;
        //printf("count of %c is %d\n", word2[i], lettercount2[word2[i] - 'a']);
    }
    
    //strlen(word1) >= strlen(word2)
    for(i=0; i< strlen(word1); i++)
        if(abs(lettercount1[word1[i] - 'a'] - lettercount2[word1[i] - 'a']) > 0) {
            diff_count++;
            if (diff_count > 1) {
                printf("Not one edit away\n");
                return 0;
            }
        }
    if(!diff_count)
        printf("One edit away!\n");
    else if (strlen(word1) < strlen (word2))
        printf("NOT one edit away!\n");
    else
        printf("One edit away!\n");
        
    return 0;
}

