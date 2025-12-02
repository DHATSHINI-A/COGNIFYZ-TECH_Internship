#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"---FIBONACCI SERIES GENERATOR---"<<endl<<endl;
    
    cout << "Enter the number of terms: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }
    
    cout << "Fibonacci Series: ";
    
    long long a = 0, b = 1;
    
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        long long temp = a + b;
        a = b;
        b = temp;
    }
    
    cout << endl;
    return 0;
}