#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin , str);
    int n = str.length();
    string word;
    istringstream iss(str);
    while (iss >> word)
    {
        string str1 = word;
        reverse(str1.begin(), str1.end());
        if(word == str1)
        {
            cout<<word<<endl;
        }
    }
    
    
    return 0;
    
}

// Output

// Enter a string: level radar noon kayak racecar
// level
// radar
// noon
// kayak
// racecar