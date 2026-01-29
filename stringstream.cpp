#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s = "Hello world!";

    
    stringstream ss(s);

    
    string word;

    ss >> word;  

    cout << word << endl;  

    return 0;
}