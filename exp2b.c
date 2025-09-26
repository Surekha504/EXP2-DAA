#include <stdio.h> 
#include<time.h>
struct Pair { 
 int max; 
 int min; 
}; 
struct Pair maxMinDivideConquer(int arr[], int low, int high) {  struct Pair result; 
 struct Pair left; 
 struct Pair right; 
 int mid; 
 if (low == high) { 
 result.max = arr[low]; 
 result.min = arr[low]; 
 return result; 
 }
 
 if (high == low + 1) { 
 if (arr[low] < arr[high]) { 
 result.min = arr[low]; 
 result.max = arr[high]; 
 } else { 
 result.min = arr[high]; 
 result.max = arr[low]; 
 } 
 return result; 
 } 
 mid = (low + high) / 2; 
 left = maxMinDivideConquer(arr, low, mid); 
 right = maxMinDivideConquer(arr, mid + 1, high); 
 result.max = (left.max > right.max) ? left.max : right.max; 
 result.min = (left.min < right.min) ? left.min : right.min;  
 return result; 
} 
int main() { 
 int arr[] = {6, 4, 26, 14, 33, 64, 46}; 
 clock_t start,end;
double cpu_time_used;
 int n = sizeof(arr) / sizeof(arr[0]); 
 start=clock();
 struct Pair result = maxMinDivideConquer(arr, 0, n - 1); 
 printf("Maximum element is: %d\n", result.max);
 printf("Minimum element is: %d\n", result.min);  
 end=clock();
cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
printf("Execution time: %f seconds",cpu_time_used);
return 0; 
}

