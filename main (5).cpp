#include <iostream>
using namespace std;

int binarySearch(int array[], int val, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

   
    if (array[mid] == val)
      return mid;

   
    if (array[mid] > val)
      return binarySearch(array, val, low, mid - 1);

   
    return binarySearch(array, val, mid + 1, high);
  }

  return -1;
}

int main(void) {
     int val;  
  int n ;
  cout<<"enter the number of elements";
  cin>>n;
  int array[n];
  cout<<"enter the elements";
  for(int i=0;i<n;i++)
  {
      cin>>array[i];
  }
  cout<<"enter the key to search";
  cin>>val;
  int result = binarySearch(array, val, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}

