#include <bits/stdc++.h>

using namespace std;

class Student // ক্লাস ক্রিয়েট করা হলো 

{

public:

 int roll;

 int cls;

 double gpa;

 Student(int roll, int cls, double gpa) // কন্সট্রাক্টর ডিক্লেয়ার করা হয়েছে। 

 {

 this->roll = roll; 

 this->cls = cls;

 this->gpa = gpa;

 }

};

Student fun() 

{

 Student rahim(342, 5, 4.99); 

 return rahim; 

}

int main()

{

 Student ans = fun(); 

 cout << ans.roll << " " << ans.cls << " " << ans.gpa << endl; 

 return 0;

}
