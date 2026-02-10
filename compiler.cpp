#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    string name;
    int marks;

    for (int i = 0; i < n; i++) {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks: ";
        cin >> marks;

        cout << "Name: " << name << ", Marks: " << marks << endl;
    }

    return 0;
}
