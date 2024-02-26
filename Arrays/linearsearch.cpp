//By normal method:

/*#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2, 6, 4, 8, 6};
    int n = 5;
    int target = 16;
    bool flag = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            cout << "Element is present at index: "<< i<<endl ;
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }
        
    
    return 0;
}
*/




#include<iostream>
using namespace std;

bool linearSearch(int arr[5], int n, int target){
    
    for (int i=0; i<n; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5] = {2, 4, 6, 8, 10};
    int n = 5;
    int target = 6;

    bool ans = linearSearch(arr, n, target);

    if(ans == 1){
        cout<<"target found";
    }

    if(ans == 0){
        cout<<"target not found";
    }

    return 0;
}