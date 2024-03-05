#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"no of rows in pyramid: "<<endl;
    cin>>n;
    for(int row = 0; row < n; row = row + 1){
        char ch;
        for(int col = 0; col < row + 1; col = col + 1){
            int number = col + 1;
            ch = number + 'A' - 1;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}