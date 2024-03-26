#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n == 1 || n == 0)
    return 1;
    // //recursive relation
    // int ans = n * fact(n - 1);
    // return ans;
    //recursive relation
    int recursiveAns = fact(n - 1);
    //processing
    
    int ans = n * recursiveAns;
    return ans;
}
int main()
{
    cout<<"The factorial of a number is : "<<fact(5);
    return 0;
}