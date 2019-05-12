/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void swap(int arr[][4], int r1, int c1, int r2, int c2)
{
    int temp;
    temp = arr[r1][c1];
    arr[r1][c1] = arr[r2][c2];
    arr[r2][c2] = temp;
    return;
}
int main() {
	int i,j,l,m,k=0;
	int in_array[4][4];
	int out_array[4][4];
	int n=4;
	l = n-1;
	
	for(i=0;i<n;i++) {
	    for(j=0;j<n;j++) {
	        in_array[i][j] = ++k;
	        printf("%d ", in_array[i][j]);
	    }
	    printf("\n");
	}
	
	 printf("\n");
	 printf("\n");
	/*for(i=0;i<n;i++) {
	    for(j=0;j<n;j++) {
	        out_array[i][j] = in_array[l][i];
	        l--;
	        printf("%d ", out_array[i][j]);
	    }
	    printf("\n");
	    l=n-1;
	}*/
	   
	   
	for(i=0;i<=n/2-1;i++)
	    for(j=0;j<n;j++)
	        swap(in_array, i,j,(n-1)-i, j);
	        
	 for(i=0;i<n;i++) {
	    for(j=0;j<n;j++)
	        printf("%d ", in_array[i][j]);
	    printf("\n");
	 }
	 
	 printf("\n");
	 printf("\n");
	
	for(i=0;i<n;i++)
	    for(j=i+1;j<n;j++)
	        swap(in_array,i,j,j,i);
	  
	 for(i=0;i<n;i++) {
	    for(j=0;j<n;j++)
	        printf("%d ", in_array[i][j]);
	    printf("\n");
	 }
	    
	
	return 0;
}
