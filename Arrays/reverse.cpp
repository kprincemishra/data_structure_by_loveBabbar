#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int left = 0;
    int right = n - 1;
    while (left <= right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for(int i = 0; i < n; i++){
        cout<< arr[i]<< " ";
    }
}
int main(){
    int arr[5] = {2, 4, 6, 1, 8};
    int n =5;
    
    reverseArray(arr, n);
    return 0;
}