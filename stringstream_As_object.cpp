#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s = "Learning stringstream in C++";

    stringstream ss;
    ss << s; 

    string word;
    while (ss >> word) {
        cout << word << endl;
    }

    return 0;
}