#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n=10;
    cout<<"Enter the values: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"printing the values: ";
    for (int i=0; i<n; i++){
        arr[i]=2*arr[i];
        cout<<arr[i]<<endl;
    }
   return 0;
}