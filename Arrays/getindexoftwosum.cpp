#include<iostream>
using namespace std;
void getIndex(int arr[5], int target){
    for(int i = 0; i < 5; i++){
            for(int j = i; j < 5; j++){
                if (arr[i+j]==target)
                cout<<i<<endl;
                cout<<j;
            }
        }
        
}
int main(){
    int arr[5]= {2,7,11,15};
    int target = 9;
    getIndex(arr, target);
    return 0;

}