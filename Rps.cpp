#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(0));
    
    string choices[] = {"rock", "paper", "scissors"};
    int computerChoice = rand() % 3;
    
    cout << "-----Rock-Paper-Scissors Game---" << endl<<endl;
    cout << "You choose?--- ";
    
    string userChoice;
    cin >> userChoice;
    
    // Convert to lowercase
    for (char &c : userChoice) {
        c = tolower(c);
    }
    
    // Validate input
    int userIndex = -1;
    for (int i = 0; i < 3; i++) {
        if (userChoice == choices[i]) {
            userIndex = i;
            break;
        }
    }
    
    if (userIndex == -1) {
        cout << "Invalid choice!" << endl;
        return 1;
    }
    
    cout << "I chose--- " << choices[computerChoice] << endl;
    
    // Determine winner
    if (userIndex == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userIndex == 0 && computerChoice == 2) ||
               (userIndex == 1 && computerChoice == 0) ||
               (userIndex == 2 && computerChoice == 1)) {
        cout << "You win..!!!" << endl;
    } else {
        cout << "I win...!!" << endl;
    }
    
    return 0;
}