// string manupulation
// #include <iostream>
// #include <string>
// #include <vector>
// #include <set>
// using namespace std;

// int main()
// {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);
//     int n = str.length();
//     set<char> st;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = str[i];
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (str[i] == str[j])
//             {
//                 count++;
//             }
//         }
//         if (st.find(ch) == st.end())
//         {
//             cout << count << ch;
//             st.insert(ch);
//         }
//     }

//     return 0;
// }

// Find number of pairs

// #include<iostream>
// #include<vector>
// using namespace std;

// int pairs(vector<int> &nums,int k)
// {
//     int n = nums.size();
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if ((nums[i] + nums[j]) == k)
//             {
//                 count++;
//             }

//         }

//     }

//     return count;

// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int targetSum = 10;

//     int res = pairs(arr, targetSum);

//     cout << "Number of pairs with sum " << targetSum << ": " << res <<endl;

//     return 0;
// }

// Swap adjacent character of string

// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string str;
//     cout<<"Enter a string: ";
//     getline(cin,str);
//     int n = str.length();
//     int i = 0;
//     cout<<"String before manupulation: "<<str<<endl;
//     while (i<n)
//     {
//         char temp = str[i];
//         str[i] = str[i+1];
//         str[i+1] = temp;
//         i += 2;
//     }

//     cout<<"String after manupulation: "<<str;
//     return 0;

// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);
//     int n = str.length();
//     string str1 = "";
//     cout << "String before change: " << str<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         str1 += str[i];
//         if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//         {
//             str1 += str[i];
//         }
//     }
//     cout << "String after change: " << str1;
//     return 0;
// }