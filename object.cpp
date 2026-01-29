#include <bits/stdc++.h>

using namespace std;

class Student

{

public:

 int roll;

 int cls;

 double gpa;

};

int main()

{

 Student rahim; 

 rahim.roll = 29; 

 rahim.cls = 9;

 rahim.gpa = 5.00;

 Student karim; 

 karim.roll = 45; 

 karim.cls = 10;

 karim.gpa = 4.33;

 cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl; 

 cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

 return 0;

}
