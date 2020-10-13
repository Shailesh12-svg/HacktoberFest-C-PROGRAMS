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
    int n,m;
    scanf("%d %d",&n,&m);
    int max[2];
    max[0]=0;
    max[1]=0;
    char** a=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        a[i]=(char*)malloc((m+1)*sizeof(char));
        for(int j=0;j<=m;j++){
            scanf("%c",&a[i][j]);
        }
    }
    for(int i=0;i<n-1;i++){
        for(int k=i+1;k<n;k++){
            int sum=0;
            for(int j=0;j<=m;j++){
                if(a[i][j]=='1'||a[k][j]=='1'){
                    sum++;
                }
            }
            if(sum>max[0]){
                max[0]=sum;
                max[1]=0;
            }
            if(sum==max[0]){
                max[1]++;
            }
        }
    }
    printf("%d\n%d",max[0],max[1]);
}
