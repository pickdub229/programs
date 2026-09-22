 #include <stdio.h> 
  void swap(int *a, int *b){
    int temp = *a;
   *a = *b;
   *b = temp;
 }
 
 void selectionsort(int arr[], int size){
  for(int i=0; i< size; i++){
     int min_idx = i;
     for(int j=i+1; j< size; j++){
   if(arr[j]< arr[min_idx]){
     min_idx = j;
}
}

if(min_idx != i){
  swap(&arr[i], &arr[min_idx]);
  }
 } }
  void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
    }
  printf("\n");
  }

int main(){
  int arr[]={64,25,12,22,10};
  int size = sizeof(arr)/sizeof(arr[0]);

   printf("original array: ");
     printarray(arr,size);

   selectionsort(arr,size);
  printf("sorted array : ");
  printarray(arr,size);
 
return 0;
}


  