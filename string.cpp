#include<iostream>
using namespace std;
int main() {

string str;

//getline(cin, str);
//cout<<str;
cin>>str;
int l=str.size();
cout<<reverse(str.begin(1), str.begin(l));

}
/*str.push_back('')- it includes a single character to the string at the last point.
str.pop_back()- it removes the last character of the string. str.append("")- it adds a string at the last point
reverse(str.begin(), str.end()).
str.clear()-removes all the elements of the string.
to_string(str) - it converts int to string.
stoi()- it comverts string to int.*/
