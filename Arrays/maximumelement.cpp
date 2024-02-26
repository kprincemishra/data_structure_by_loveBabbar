#include<iostream>
#include<limits.h>
using namespace std;

int findMaximumElement(int arr[], int n){
    int maxAns = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i]>maxAns){
            maxAns = arr[i];
        }
    }
    return maxAns;
}
int main(){
    int arr[5] = {7, 99, 88, 5, 2};
    int n = 5;
    
    int maximum = findMaximumElement(arr, n);
    cout<<"Maximum element : "<<maximum<<endl;
    return 0;
}