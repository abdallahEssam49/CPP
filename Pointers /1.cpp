#include <iostream>
using namespace std;

int main() {
  int array[5] = {1, 2, 3, 4, 5};
  // compiler creates an internal pointer for and stores the address of the
  // first element of the array
  cout << array << "\n"; // 0x7ffd81a427a0 
  cout << &array[0] << "\n"; // 0x7ffd81a427a0 

  int *Ptr_array = &array[0]; // point to the first element of the array
  cout << *Ptr_array << "\n"; // 1 content of the first element of the array Ptr_array[0]
  cout << Ptr_array << "\n";  // 0x7ffd81a427a0 
  cout << &Ptr_array << "\n";  // 0x7ffd81a42798 adress of the pointer

  for (int i=0 ; i <5 ; ++i)
    {
      cout << array[i] << " ";
      cout << Ptr_array[i] << " " ;
      cout << *(array+i) << " ";
      cout << *(Ptr_array+i) << " ";
      cout << "\n";
    }
  Ptr_array++;
  cout << *Ptr_array << "\n";
}
