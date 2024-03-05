#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of row in pyramid: "<<endl;
    cin>>n;
    for(int row = 0; row < n; row = row + 1){ //outher loop (iterates through each row of the pyramid)
        char ch;
        for(int col = 0; col < row + 1; col = col + 1){ //inner loop (responsible for printing characters in each row.)
            int number = col + 1; //: Computes the value of the character to be printed based on the column.
            ch = number + 'A' - 1; //Converts the numeric value to a character using ASCII values
            cout<<ch;
        }
        for(char alphabet = ch ; alphabet > 'A';){ //for printing characters in reverse order.
            alphabet = alphabet - 1; // Decrements the value of alphabet to print characters in reverse order.
            cout<<alphabet; //Prints the reversed characters.
        }
        cout<<endl;
    }
    return 0;
}