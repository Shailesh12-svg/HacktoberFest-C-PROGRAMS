#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int min(int a,int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int maxi(int a,int b){
    if(a<b){
        return b;
    }
    else{
        return a;
    }
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int  max=0;
    int* a=(int*)calloc(n,sizeof(int));
    for(int i=0;i<m;i++){
        int p;
        scanf("%d",&p);
        a[p]=1;
    }
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            int j=maxi(i-1,0);
            while(a[j]!=1 && j>=0){
                j--;
            }
            if(j==-1){
                if(max<i){
                    max=i;
                }
            }
            else{
                if(max<(i-j)/2){
                    max=(i-j)/2;
                }

            }
            j=min(i+1,n-1);
            while(a[j]!=1 && j<n){
                j++;
            }
            if(j==n){
                if(max<(n-i-1)){
                    max=n-i-1;
                }
            }
            else{
                if(max<(j-i)/2){
                    max=(j-i)/2;
                }

            }
        }
    }
    printf("%d",max);
}
