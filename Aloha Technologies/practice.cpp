#include <bits/stdc++.h>
using namespace std;

// int fact(int n)
// {
//     if(n==0 || n==1)
//     {
//         return 1;
//     }
//     else{
//         return n * fact(n-1);
//     }
// }

// int main() {
//     int N;
//     cout<<"Enter a number: ";
//     cin>>N;
//     int res = fact(N);
//     cout<<"Factorial of "<<N<<" is "<<res;
//     return 0;
// }

// bool check(int n)
// {
//     bool isTrue = true;
//     if(n < 2)
//     {
//         isTrue = false;
//     }
//     if(n == 2 || n==3)
//     {
//         isTrue = true;
//     }
//     for (int i = 2; i <= n/2; i++)
//     {
//         if(n%i == 0)
//         {
//             isTrue =  false;
//         }
//     }

//     return isTrue;
// }

// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if(check(num))
//     {
//         cout<<num<<" is a prime number!"<<endl;
//     }
//     else{
//         cout<<num<<" is not a prime number!";
//     }
//     return 0;
// }

// int main()
// {
//     string str;
//     cout<<"Enter a string: ";
//     cin>>str;
//     string str1 = "";
//     int n = str.length();
//     for (int i = n-1; i >= 0; i--)
//     {
//         str1 += str[i]; //String indices start from 0, so the loop should start from n - 1 (the last character) and go down to 0
//     }
//     if(str == str1)
//     {
//         cout<<str<<" is palindrome!";
//     }
//     return 0;
// }

// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     int F1 = 0;
//     int F2 = 1;
//     int F3;
//     cout<<F1<<" "<<F2<<" ";
//     for (int i = 0; i < num; i++)
//     {
//         F3 = F1 + F2;
//         F1 = F2;
//         F2 = F3;
//         cout<<F3<<" ";
//     }cout<<endl;

//     return 0;    
// }

// int main()
// {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     int F1 = 0;
//     int F2 = 1;
//     int F3;
//     stack<int> st;
//     st.push(F1);
//     st.push(F2);
//     for (int i = 0; i < num; i++)
//     {
//         F3 = F1+F2;
//         F1 = F2;
//         F2 = F3;
//         st.push(F3);
//     }
//     cout<<"Elements in reverse order: "<<endl;
//     while (!st.empty())
//     {
//         cout<<st.top()<<" ";
//         st.pop();
//     }cout<<endl;
    

//     return 0;    
// }


// int main()
// {
//     int arr[] = {0,1,1,0,0,1,0,1,1,0};
//     int left = 0;
//     int rigth = 1;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     while (rigth < n)
//     {
//         if(arr[left] > arr[rigth])
//         {
//             swap(arr[left],arr[rigth]);
//             left++ , rigth++;
//         }
//         else if(arr[left] < arr[rigth])
//         {
//             left++; rigth++;
//         }
//         else{
//             rigth++;
//         }
//     }
//     cout<<"Array after seperating: "<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// int main()
// {
//     int sum = 0;
//     for (int i = 1; i < 10; i++)
//     {
//         int sum = pow(i,1);
//         if(sum == i)
//         {
//             cout<<i<<" ";
//         }
//         sum = 0;
//     }

//     for (int i = 10; i < 100; i++)
//     {
//         sum = pow(i%10,2) + pow(i%100,2);
//         if(sum == i)
//         {
//             cout<< i<<" ";
//         }
//         sum = 0;
//     }
    
//     return 0;
// }


// int main()
// {
//     string str;
//     cout<<"Enter a string: ";
//     getline(cin , str);
//     istringstream iss(str);
//     string word;
//     while (iss >> word)
//     {
//         string str1 = word;
//         for (int i = 0; i < str1.length(); i++)
//         {
//             if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')
//             {
//                 cout<<str1<<endl;
//                 break;
//             }
            
//         }
//         str1 = "";
        
//     }
//     return 0;
    
// }

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin,str);
    istringstream iss(str);
    string word;
    while (iss >> word)
    {
        string str1 = word;
        for (int i = 0; i < str1.length(); i++)
        {
            if(str1[i] == 'c')
            {
                cout<<str1<<endl;
                break;
            }
        }
        str1 = "";
        
    }
    return 0;
}