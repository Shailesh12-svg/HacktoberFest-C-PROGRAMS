#include <assert.h>
#include <limits.h>
#include <linux/limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a,b;
    scanf("%d %d",&a,&b);
    int** o=(int**)calloc(k, sizeof(int*));
    long sum=0;
    if(k>0){
        int t1=n-b,t2=b-1,t3=n-a,t4=a-1,t5=min((n-a),(n-b)),t6=min(a-1,b-1),t7=min(n-a,b-1),t8=min(n-b,a-1);
        for(int i=0;i<k;i++){
            o[i]=(int*)calloc(2, sizeof(int));
            scanf("%d %d",&o[i][0],&o[i][1]);
            int temp1=o[i][0],temp2=o[i][1];
            if(a==temp1){
                if(temp2>b){
                    if(t1>(temp2-b-1)){
                        t1=temp2-b-1;
                    }
                }
                else{
                    if(t2>(b-temp2-1)){
                        t2=b-temp2-1;
                    }
                }

            }
            else if(b==temp2){
                if(temp1>a){
                    if(t3>(temp1-a-1)){
                        t3=temp1-a-1;
                    }
                }
                else{
                    if(t4>(a-temp1-1)){
                        t4=a-temp1-1;
                    }
                }

            }
            else if(temp1-a==temp2-b){
                if(temp1>a){
                    if(t5>(temp1-a-1)){
                        t5=(temp1-a-1);
                    }
                }
                else{
                    if(t6>(a-temp1-1)){
                        t6=(a-temp1-1);
                    }
                }
            }
            else if(temp1-a==b-temp2){
                if(temp1>a){
                    if(t7>(temp1-a-1)){
                        t7=(temp1-a-1);
                    }
                }
                else{
                    if(t8>(a-temp1-1)){
                        t8=(a-temp1-1);
                    }
                }
            }
        }
        sum=t1+t2+t3+t4+t5+t6+t7+t8;
    }
    else{
        sum=2*(n-1)+min((n-a),(n-b))+min(n-a,b-1)+min(n-b,a-1)+min(a-1,b-1);
    }

    printf("%ld",sum);
}
