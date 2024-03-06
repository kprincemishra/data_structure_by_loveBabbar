#include<iostream>
using namespace std;
int main()
{
    int num = 8;
    int n = 4;
    
    for(int row = 0; row < n; row = row + 1){
       //inverted pyramid
        for(int col = 0; col < n - row; col = col + 1){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}