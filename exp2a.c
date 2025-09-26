#include <stdio.h> 
#include<time.h>
void insertionSort(int array[], int n) { int i, element, j; 
for(i=1;i<n;i++) 
{ 
element=array[i]; 
j=i-1; 
while (j >= 0 && array[j] > element) { 
array[j + 1] = array[j]; 
j=j-1; 
} 
array[j + 1] = element; 
} 
} 
void printArray(int array[], int n) 
{ 
int i; 
for (i = 0; i < n; i++) 
printf("%d ", array[i]); 
printf("\n"); 
} 
int main() { 
int arr[] = {50, 23, 9, 18, 61, 32}; 
clock_t start,end;
double cpu_time_used;
int n = sizeof(arr) / sizeof(arr[0]);
printf("\nBefore sorting: "); 
start=clock();
printArray(arr, n); 
insertionSort(arr, n); 
printf("\nAfter sorting: "); 
printArray(arr, n); 
end=clock();
cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
printf("\nExecution time: %f seconds",cpu_time_used);
return 0; 
}
