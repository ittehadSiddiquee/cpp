#include <bits/stdc++.h>

using namespace std;

class Student // ক্লাস ক্রিয়েট করা হয়েছে। 

{

public: // এক্সেস মডিফায়ার হিসেবে পাবলিক দেওয়া হয়েছে। 

 char name[100]; // ক্লাস ভেরিয়েবল ডিক্লেয়ার করা হয়েছে। 

 int roll;

 double cgpa;

};

int main()

{

 Student a, b; 

 cin.getline(a.name, 100);  

 cin >> a.roll >> a.cgpa; 

 getchar(); 

 cin.getline(b.name, 100); 

 cin >> b.roll >> b.cgpa; 

 

 cout << a.name << " " << a.roll << " " << a.cgpa << endl; 

 cout << b.name << " " << b.roll << " " << b.cgpa << endl; 

 return 0; 

}
