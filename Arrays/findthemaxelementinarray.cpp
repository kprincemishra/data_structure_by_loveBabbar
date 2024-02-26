#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int arr[3] = {2,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);
    cout<<"min = "<<arr[0]<<" Max = "<<arr[n-1]<<endl;
    return 0;
}