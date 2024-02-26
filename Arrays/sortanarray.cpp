#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5] = {64,4,2,8,31};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"sorted array is : ";
    sort(arr, arr+n);
    for(int i = 0; i<n; i++){
    cout<<arr[i];
    }
    return 0;
}