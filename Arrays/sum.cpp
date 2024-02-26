//By Normal Method:
/*
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n = 5;
    int sum = 0;

    //taking input:
    for(int i = 0; i < n; i++){
        cout<<"Enter element for the index "<<i<< " is ";
        cin>>arr[i];
    }

    //calculating the sum:
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    //printing the sum
    cout<<"The sum of the given array is : "<<sum<<endl;

    return 0;
}
*/

//By Function:

#include<iostream>
using namespace std;

void calculateArray(int arr[5], int n, int sum){
    //taking input in an array:
    for(int i = 0; i < n; i++){
        cout<<"Enter element for the index "<<i<< " is ";
        cin>>arr[i];
    }

    //performing sum:
    for(int i = 0; i < n; i++){
    sum = sum + arr[i];
     }

    //printing the sum:
    cout<<"The sum of the elements are : "<<sum<<endl;
}


int main(){
    int arr[5];
    int n = 5;
    int sum = 0;
    //Function :
    calculateArray(arr, n, sum);
    return 0;
}