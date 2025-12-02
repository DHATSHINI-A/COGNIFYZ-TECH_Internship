#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str,rev;
    cout<<"---PALINDROME CHECK---"<<endl<<endl;
    cout<<"Enter the string to check for palindrome: ";
    cin>>str;
    rev=str;
         reverse(rev.begin(),rev.end());
    if(str==rev){
        cout<<str<<" is a Palindrome"<<endl;
    }
    else{
        cout<<str<<" is Not a Palindrome"<<endl;
    }
    return 0;

}