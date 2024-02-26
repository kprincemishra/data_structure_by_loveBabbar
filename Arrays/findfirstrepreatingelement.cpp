#include<iostream>
using namespace std;
int findFirstOccurence(int arr[], int n){
    for(int i = 0; i < n; i++){
        bool isRepeated = false;
        for(int j = i + 1; j < n; j++){
            if(arr[i] = arr[j]){
                isRepeated = true;
                cout<<i<<endl;
                break;
                return i + 1;
            }
        }
        return -1;
    }
}
int main()
{
    int arr[7] = {1, 5, 3, 4, 3, 5, 6};
    int n = 7;
    findFirstOccurence(arr, n);
    return 0;
}