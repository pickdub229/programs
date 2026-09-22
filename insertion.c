 #include <stdio.h> 
void insertionsort(int arr[], int size){
 for(int i= 1;i<size; i++){
   int key = arr[i]; 
   int j = i-1;
   
  while(j>=0 && arr[j]>key){
   arr[j+1]= arr[j];
   j--;
    } 
  arr[j+1]=key;
}
}   
  void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
    }
  printf("\n");
  }

int main(){
  int data[]={64,25,12,22,10};
  int size = sizeof(data)/sizeof(data[0]);

   printf("original array: ");
     printarray(data,size);

   insertionsort(data,size);
  printf("sorted array : ");
  printarray(data,size);
 
return 0;
}