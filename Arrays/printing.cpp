//NORMAL METHOD:

/*#include<iostream>
using namespace std;
int main(){
    int arr[5]= {2, 4, 6, 8, 10};
    int n = 5;
    for (int i = 0; i < n; i++){
      cout<<" The value of arr at index "<<i<<" is "<<arr[i]<<endl;        
    }
    return 0;
}*/


//BY USING FUNCTION:


#include<iostream>
using namespace std;
void printArray(int arr[5], int n){
  for (int i = 0; i < n; i++){
      cout<<" The value of arr at index "<<i<<" is "<<arr[i]<<endl;        
    }
}
int main(){
    int arr[5]= {2, 4, 6, 8, 10};
    int n = 5;
    printArray(arr, n);
    return 0;
}

