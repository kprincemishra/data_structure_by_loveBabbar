#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n=5;
    int sum=0;
    cout<<"ENter the values: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"printing the sum"<<endl;
    for (int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    return 0;
}