#include<iostream>
using namespace std;

void ExtremePoint(int arr[5], int n){
    int left = 0;
    int right = n - 1;
    while (left < right) {
        if (left > right){
            cout<<arr[left];
        }
        else{
            cout<<arr[left]<<endl;
            cout<<arr[right]<<endl;
            left++;
            right--;
        }
}
}
int main(){
    int arr[] = {10,20,30,40,50};
    int n = 5;
    ExtremePoint(arr,n);
    return 0;
}