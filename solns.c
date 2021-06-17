/* Enter your solutions in this file */
#include <stdio.h>
int max(int arr[], int count){
 
 for(int i=0;i<count;i++){
   if(arr[0]<arr[i]){
      arr[0]=arr[i];
   }
 }
   return arr[0];
}

int min(int arr[], int count){
 
 for(int i=0;i<count;i++){
   if(arr[0]>arr[i]){
      arr[0]=arr[i];
   }
}
   return arr[0];
}

float average(int arr[], int count){
 int sum=0;
 float avg=0;
 for(int i=0;i<count;i++){
     sum=sum+arr[i];
   
 }
   avg=sum/count; 
   return avg;
}

int mode(int arr[], int count){
int v= 0, c= 0;

   for (int i = 0; i < count; i++) {
      int n= 0;
      
      for (int j = 0; j < count; j++) {
         if (arr[j] == arr[i])
         ++n;
      }
      
      if (n > c) {
         c = n;
         v = arr[i];
      }
   }

   return v;
}

