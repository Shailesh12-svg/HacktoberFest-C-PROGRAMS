#include<stdio.h>
int main(){

   int i, j, n, temp;

   printf("Enter the number you are going to enter: ");
   scanf("%d",&n);
   int number[n];
   printf("Enter %d elements: ", n);
  
   for(i=0;i<n;i++)
      scanf("%d",&number[i]);

  
   for(i=1;i<n;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",number[i]);

   return 0;
}
