/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
	//code
	int array[] = {1, 2, 3, 7, 5};
	int length = sizeof(array)/sizeof(array[0]);
	int sum = 12, i, j, temp;
	int found = 0;
	for(i=0;i<length;i++) {
	    temp = array[i];
	    for(j=i+1;j<length;j++) {
	        temp += array[j];
	        if(temp > sum) {
	            break;
	        } else if(temp == sum){
	            found = 1;
	            break;
	        }
	        
	    }
	    if(found)
	     break;
	}
	
	if(found)
	    printf("found %d %d", i, j);
	else
	    printf("Not found");
	    
	return 0;
}