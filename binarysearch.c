#include <stdio.h>
 int binarysearch(int arr[],int low,int high,int target){
      if(low>high){
        return -1;
          }
       int mid = low + (high - low)/2;
        if(arr[mid]==target){
          return mid; 
             }
         if (arr[mid]> target){
            return binarysearch(arr,low,mid - 1, target);
           }
        return binarysearch(arr,mid+1,high,target);
}
 int main(){
 int arr[]={2,5,8,12,16,23,38,56,72,91};
  int n= sizeof(arr)/sizeof(arr[0]);
  int target = 23;
 int result = binarysearch(arr,0,n-1,target);
   
 if(result!= -1){
   printf("element %d found at index %d.\n", target, result);
   }
  else{
   printf("element %d not found in the array. \n",target);
   }
 return 0;
}