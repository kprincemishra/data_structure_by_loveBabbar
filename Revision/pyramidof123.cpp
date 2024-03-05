#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    for(int row = 0; row < n; row = row + 1){
        int totalCol = row + 1; //Sets the total number of columns for the current row.
        for(int col = 0; col < totalCol; col = col + 1){
            if(col == totalCol - 1){ // if the current column is the last one in the row 
                cout<<row + 1;
            }
            else{
                cout<<row + 1<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}