//To insert an element in an array in C++ programming, you have to ask the user to enter the size and elements of the array. And then ask to enter the element to insert and at what position, as shown in the program given below:
#include <iostream>

using namespace std;

int main ()
{
 int size;int arr[0]; int i; int item; int pos;
 cout<< "Enter the required size"<<endl;
 cin >> size; 
 cout << "Enter the "<<size<< " elements of array"<<endl;
 for(i = 0; i<size ; i++){
     cin >> arr[i];
 }
 cout << "Enter the item to be inserted" << endl; 
 cin >> item;
 cout << "The item to be inserted is: " << item <<endl;
 cout << "Enter the position for insertion" << endl; 
 cin >> pos; //Enter pos-1 for pos
 for(int j = size-1; j>=pos; j--){
    arr[j] = arr[j+1]; 
    arr[j] = item;
    size++;
 }
 cout <<" The required array is" << endl;
 for(i = 0; i<size; i++){
    cout<< arr[i] <<" ";
 }
  return 0;
}
