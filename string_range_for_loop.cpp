#include<bits/stdc++.h>

using namespace std;

int main()

{

 string s;

 cin>>s;

 // for(int i=0;i<s.size();i++) // নরমালি আমরা এভাবে লুপ চালাতাম। এটি ইন্ডেক্স বেসড লুপ। এখানে আমরা ইন্ডেক্স এর উপর লুপ চালিয়ে তারপর সেই ইনডেক্সে থাকা ভেলু প্রিন্ট করে দেই।

 // {

 // cout<<s[i]<<endl;

 // }

 for(char c:s) 
 {

 cout<<c<<endl; 

 }

 return 0;

}
