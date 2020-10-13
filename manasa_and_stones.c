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
    int t;
    scanf("%d",&t);
    for(int a0=0;a0<t;a0++){
        int  n,a,b;
        scanf("%d\n%d\n%d",&n,&a,&b);
        if(a>b){
            int temp=a;
            a=b;
            b=temp;
        }
        int sum=(n-1)*a;
        int j=0;
        if(a==b){
            printf("%d",sum);
        }
        else{
            for(int i=0;i<n;i++){
                printf("%d ",sum+j*(b-a));
                j++;
            }
        }
        printf("\n");
    }

}
