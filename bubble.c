#include <stdio.h>
  void bubblesort(int arr[],int n){
   int i,j,temp;
    int swapped;
   
  for(int i=0;i<n-1; i++){
    swapped = 0;
   
  for( j= 0;j<n-1; j++){
   if(arr[j]>arr[j+1]){

     temp = arr[j];
     arr[j]= arr[j+1];
     arr[j+1] = temp;
    
    swapped =1;
  }
 } 
if (swapped ==0){
   break ;
}
 }
 }
  
void printarray(int arr[],int size){
    for(int i=0; i< size; i++){
       printf("%d",arr[i]);
      }
   printf("\n");
}
int main(){
  int data[]= {64,34,25,12,22,11,90};
    int n = sizeof(data)/ sizeof(data[0]);

  printf("original array\n");
  printarray(data,n);
  
   bubblesort(data, n);
  
   printf("\n sortef array \n");
   printarray(data,n);
  
 return 0;
  }
