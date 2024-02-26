#include<iostream>
using namespace std;
void countZeroAndOne(int arr[5], int n){
    int countZero = 0;
    int countOne = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] == 1){
            countOne++;
        }
        else if (arr[i] == 0){
            countZero++;
        }
    }
    cout << "Number of ones: " << countOne << endl;
    cout << "Number of zeros: " << countZero << endl;
}
int main(){
    int arr[5] = {0, 0, 1, 1, 0};
    int n = 5;
    countZeroAndOne(arr, n);
    return 0;
}