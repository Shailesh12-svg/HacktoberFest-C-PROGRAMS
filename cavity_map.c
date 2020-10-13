#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int n;
    scanf("%d",&n);
    char a[n][n];
    for(int i=0;i<n;i++){
        scanf("%s",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>0 && j>0 && i<n-1 && j<n-1 && ((int)a[i][j]>(int)a[i][j-1])&& ((int)a[i][j]>(int)a[i][j+1]) && ((int)a[i][j]>(int)a[i+1][j]) && ((int)a[i][j]>(int)a[i-1][j])){
                a[i][j]='X';
            }
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}
