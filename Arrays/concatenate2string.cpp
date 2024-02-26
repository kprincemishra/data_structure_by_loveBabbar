#include <iostream>
#include <string>
using namespace std;
char findKthChar(std::string& s, int n, int k) {
    int len = s.length();
    while (k >= len) {
        k -= len;
        len *= n;
    }
    return s[k];
}

int main() {
    std::string s = "geeks";
    int n = 3;
    int k = 10;
    char c = findKthChar(s, n, k);
    cout << "The character at the kth index is: " << c << std::endl;
    return 0;
}