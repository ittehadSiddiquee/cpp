#include <iostream>

#include <string>

 

int main() {

 std::string s = "Hello, World!";

 

 

 std::cout << "স্ট্রিংয়ের সাইজ: " << s.size() << std::endl;

 
 

 

 std::cout << "স্ট্রিংয়ের সর্বোচ্চ সাইজ: " << s.max_size() << std::endl;

 


 std::cout << "স্ট্রিংয়ের ক্যাপাসিটি: " << s.capacity() << std::endl;

 

 s.clear();

 std::cout << "স্ট্রিং ক্লিয়ার করার পর সাইজ: " << s.size() << std::endl;



 

 

 std::cout << "স্ট্রিং কি খালি?: " << (s.empty() ? "হ্যাঁ" : "না") << std::endl;

 

 

 

 s.resize(10);

 std::cout << "স্ট্রিং রিসাইজ করার পর সাইজ: " << s.size() << std::endl;

 
 

 return 0;

}
