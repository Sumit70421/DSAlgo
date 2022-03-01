#include <iostream>
#include <string>
using namespace std;
 
 
int main(){
    // string str;
    // getline(cin, str);   //to get the whole line as input as cin treats spaces as end of input for variable
    // cout<<str;

    //concat function

    string s1 = "abc";
    string s2 = "xyz";

    s1.append(s2);
    cout<<s1<<endl; //abcxyz
    s1.erase(3,3);  //abc
    cout<<s1<<endl;
    cout<<s1.compare(s2)<<endl; //lexicographic diff between strings
    // s1.clear();  //s1=" "
    // cout<<s1;
    
    //get substrings
    s2 = s1.substr(1,2);
    cout<<s2<<endl;

    //convert string to int
    string s ="gjd6969ssrgsod"; //terminate called after throwing an instance of 'std::invalid_argument'
//   what():  stoi
    // int x = stoi(s);

    //conver int to string

    int p = 69420;
    string p2 = to_string(p) + "2";
    cout<<p2;
   return 0;
}