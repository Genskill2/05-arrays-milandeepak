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
