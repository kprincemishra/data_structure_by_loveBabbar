#include<iostream>
using namespace std;
bool ifSorted(int arr, int size, int index){
    //base case
    if(index >= sum){
        return true;
    }
    //processing
    if(arr[index] <= arr[index+1]){
        return true;
    }
    //recursion call
    ifSorted(arr, size, index+1);
return false;
}
int main()
{
    int arr[] = {10,20,40,60,80};
    int size = 5;
    int index = 0;
    cout<<ifSorted(arr, size, index);
    return 0;
}