#include<iostream>
using namespace std;

int main() {
  int arr2d[3][2];
  int *arr[3]={0}; // array of 3 pointers inisialized to Null

  for(int i=0;i<3;i++)arr[i] = new int[2]; 
  // each pointer points to an array of 2 integers

  for(int i=0;i<3;i++) 
    for(int j=0; j<2; j++)
      arr[i][j]=arr2d[i][j] = i*2+j;

  for(int i=0;i<3;i++) 
    for(int j=0; j<2; j++)
      cout << arr[i][j] << " ";
  
  // Deallocate memory to prevent leaks
  for (int i = 0; i < 3; i++) delete[] arr[i];

  return 0;
}
