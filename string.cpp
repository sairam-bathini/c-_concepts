#include <iostream>
#include <algorithm>
using namespace std;

int main(){

//program to check whether the given input is palindrome or not

string s;
cout << "Enter the input: ";
cin >> s;
string s1 = s;
reverse(s1.begin(), s1.end());

if (s == s1)
cout << "It is a palindrome";
else
cout << "It is not a palindrome";

}
