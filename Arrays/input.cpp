//BY NORMAL METHOD:
/*
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n = 5;

    //for taking input
    for(int i = 0; i < n; i++){
        cout<<"Enter element for the index "<<i<< " is ";
        cin>>arr[i];
    }

    //for printing output:
    for(int i = 0; i < n; i++){
        cout << "Element at index "<<i<<" is "<<arr[i]<<endl;
    }
    return 0;
}

*/

//By function:

#include<iostream>
using namespace std;
void InputArray(int arr[5], int n){
    for (int i=0; i<n; i++) {
        cout << "Enter element for the index " << i << " : ";
        cin>>arr[i];
}
}
void PrintArray(int arr[5], int n) {
    for (int i=0; i<n; i++){
        cout<<"Element at index "<<i<<" is "<<arr[i]<<endl;
}
}
int main(){
    int arr[5];
    int n = 5;
    InputArray(arr, n);
    PrintArray(arr, n);
    return 0;
}
