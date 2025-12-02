#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    string str;
    cout<<"---REVERSING A STRING---"<<endl<<endl;
    cout<<"Enter the string to be reversed: ";
    cin>>str;
    cout << "Original String : " << str << endl;
    cout << "Reversed String : " << reverseString(str) << endl;
    return 0;
}