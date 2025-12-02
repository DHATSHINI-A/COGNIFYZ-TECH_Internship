#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numSubjects;

    cout<<"---GRADE CALCULATOR---"<<endl<<endl;
    
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;
    
    double grades[numSubjects];
    double sum = 0;
    
    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> grades[i];
        sum += grades[i];
    }
    double average = sum / numSubjects;
    cout<<"---- Grade Report -----"<<endl;

    cout << fixed << setprecision(2);
    cout << "\nAverage Marks : " << average << endl;
    if (average >= 90) {
        cout << "Grade: O" << endl;
    } 
    else if (average >= 80) {
        cout << "Grade: A" << endl;
    } 
    else if (average >= 70) {
        cout << "Grade: B" << endl;
    } 
    else if (average >= 60) {
        cout << "Grade: C" << endl;
    } 
    else {
        cout << "Grade: F" << endl;
    }
    
    cout<<endl;
    
    return 0;
}