#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int size) {
  for (int i = 0; i < size; ++i)
    cout << arr[i] << " ";
  cout << "\n";
}

void print_2(int arr[] , int size) {
  int *ptr = arr;
  while(ptr!=arr+size)cout << *ptr++ << " ";
  cout << "\n";
}

int main() {
  int array[] = {10, 20, 30, 40, 50};
  int *Ptr = array + 2; // point to the third element , 30
  int val;
  cout << Ptr - array << "\n";

  val = *Ptr++; // use Pointer vaule in val then increment pointer address
  //print(array, sizeof(array) / sizeof(array[0]));// 10 20 30 40 50
  //print_2(array, sizeof(array) / sizeof(array[0])); // 10 20 30 40 50
  cout << val << " " << Ptr - array << "\n"; // 30  3
  cout << "\n";

  Ptr = array + 2;
  val = *++Ptr; // increment pointer address then use Pointer vaule in val
  //print(array, sizeof(array) / sizeof(array[0])); // 10 20 30 40 50
  //print_2(array, sizeof(array) / sizeof(array[0])); // 10 20 30 40 50
  cout << val << " " << Ptr - array << "\n"; // 40  3
  cout << "\n";

  Ptr = array + 2;
  val = *Ptr--; // use Pointer vaule in val then decrement pointer address
  //print(array, sizeof(array) / sizeof(array[0])); // 10 20 30 40 50
  //print_2(array, sizeof(array) / sizeof(array[0])); // 10 20 30 40 50
  cout << val << " " << Ptr - array << "\n"; // 30  1
  cout << "\n";

  Ptr = array + 2;
  val = *--Ptr; // decrement pointer address then use Pointer vaule in val
  //print(array, sizeof(array) / sizeof(array[0])); // 10 20 30 40 50
  //print_2(array, sizeof(array) / sizeof(array[0])); // 10 20 30 40 50
  cout << val << " " << Ptr - array << "\n"; // 20  1
  cout << "\n";

  Ptr = array + 2;
  val = (*Ptr)++; // use Pointer vaule in val then increment pointer value
  //print(array, sizeof(array) / sizeof(array[0])); // 10 20 31 40 50
  //print_2(array, sizeof(array) / sizeof(array[0])); // 10 20 31 40 50
  cout << val << " " << Ptr - array << "\n"; // 20  1
}
