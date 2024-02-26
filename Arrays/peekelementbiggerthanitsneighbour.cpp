#include<iostream>
using namespace std;
int main(){
    int arr[5]= {5,10,20,15};
    for(int i = 0; i < 5; i++){
        if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1]){
            cout<<"The element is : "<<arr[i]<<endl;
        }
    }
    return 0;
}