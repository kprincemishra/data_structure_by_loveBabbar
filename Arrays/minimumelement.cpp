#include<iostream>
#include<limits.h>
using namespace std;

int findMinimumElement(int arr[], int n){
    int minAns = INT_MAX;
    for(int i = 0; i < n; i++){
        if (arr[i] <= minAns) {
            minAns = arr[i];
    }
    }
    return minAns;
}

int main(){
    int arr[5] = {2, 4, 6, 1, 8};
    int n =5;

    int miniumum = findMinimumElement(arr, n);

    cout<<" The minimum element is: " << miniumum << endl;

    return 0;
}