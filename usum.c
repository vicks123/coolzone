#include <stdio.h>

typedef enum { FALSE, TRUE } boolean;

boolean checkusum(int array[], int index)
{
    int last_pos = index-1;
    int start_pos = 0;
    int pass = 0;
    int j, k;
    
	printf("start_pos = %d last_pos = %d index = %d\n", start_pos, last_pos, index);
    while (start_pos < last_pos) {
        for (k = start_pos; k < last_pos; k++) {
			printf("%d %d %d\n", array[k], array[last_pos], array[index]);
            if ((array[k] + array[last_pos]) == array[index]) {
				printf("found usum\n");
                pass++;
                if (pass > 1) {
					printf("NOt a usum\n");
                    return FALSE;
				}
                break;
            }
        }
		last_pos--;
        start_pos++;
    }
	printf("array is ");
	for(j=0; j <= index; j++)
		printf(" %d ", array[j]);
	printf("\n");
    return TRUE;
}

int main()
{
    int array[100] = {0};
    int i, j, k, length;
    printf("Enter length\n");
    scanf("%d", &length);
    printf("length = %d\n", length);
    
    i = j = 2; //u0=1, u1=2
    int max;
    
    array[0] = 1;
    array[1] = 2;
    max = array[1] + 1;
    
    while(i < length) {
        array[j] = max++;
        if (checkusum(array, j)) {
            j++; //move to next index
            i++;
        }
    }
    
    for(k=0; k < length; k++)
        printf("%d\n", array[k]);

    return 0;
}