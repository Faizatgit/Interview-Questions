#include <iostream>
using namespace std;

int main() {
    int num;
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int a = num;
    int rNum = 0;
    while( num!=0)
    {
        n = num%10;
        rNum = rNum * 10 + n;
        num = num/10;
    }
    
    if(a == rNum)
    {
        cout<<"Given number is palindrome! ";
    }
    else{
        cout<<"Given number is not palindrome! ";
    }

    return 0;
}

// Output

// Enter a number: 
// 123
// Given number is not palindrome! 