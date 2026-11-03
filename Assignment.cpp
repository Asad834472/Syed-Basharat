
#include <iostream>
using namespace std;
int main() {
    int n, scores[100], sum = 0;
    string names[100];
    cout << "Enter number of students: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter name: ";
        cin >> names[i];
        cout << "Enter score: ";
        cin >> scores[i];
        sum += scores[i];
    }
    cout << "Average score: " << (double)sum / n << endl;
    cout << "--- Grades ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << " got ";
        if (scores[i] >= 90)
            cout << "A";
        else if (scores[i] >= 80)
            cout << "B";
        else if (scores[i] >= 70)
            cout << "C";
        else
            cout << "F";
        cout << endl;
    }
    return 0;
}