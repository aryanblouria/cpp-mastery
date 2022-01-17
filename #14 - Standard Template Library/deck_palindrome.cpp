#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main()
{
    string s = "";
    cin>>s;

    deque<char> d = {};

    for (char c: s)
        d.push_back(c);

    while (d.front() == d.back() && d.size() > 1)
    {
        d.pop_front();
        d.pop_back();
    }

    if (d.empty() || d.size() == 1)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not palindrome"<<endl;
}
