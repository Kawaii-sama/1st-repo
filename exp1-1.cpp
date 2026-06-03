//to insert an element at the end of a given array
#include <iostream>

using namespace std;

int main()
{
    int arr[6]; int last; int i;
    cout << "Enter 5 elements of array"<<endl;
    for(i=0; i<5; i++){
        cin >> arr[i];
    }
    cout <<"Enter the element to be inserted at last "<<endl;
    cin >> last;
    arr[i] = last;
    cout<<"The required array is" <<endl;
    for(int j=0; j<6; j++){
        cout<< arr[j] << endl;
    }
    cout<<"Hello World";

    return 0;
}
