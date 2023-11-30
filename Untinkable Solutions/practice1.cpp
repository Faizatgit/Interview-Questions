// Find duplicate
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int num(vector<int> &nums)
// {
//     int n = nums.size();
//     int left = 0;
//     int right = 1;
//     int ans;
//     sort(nums.begin(),nums.end());
//     while(right < n)
//     {
//         if(nums[right] == nums[left])
//         {
//             ans = nums[right];
//             break;
//         }
//         else{
//             left++;
//             right++;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> nums = {2,7,5,3,9,3,3};
//     int res = num(nums);
//     cout<<"The repeating num is: "<<res<<endl;
//     return 0;
// }

//Reverse words in a string

// #include<iostream>
// #include<string>
// #include<stack>
// #include<sstream>
// using namespace std;

// int main()
// {
//     string str;
//     stack <string> st;
//     cout<<"Enter a string: ";
//     getline(cin,str);
//     int n = str.length();
//     string word;
//     istringstream iss(str);
//     while (iss >> word)
//     {
//         st.push(word);
//     }
    
//     while (!st.empty())
//     {
//         cout<<st.top()<<" ";
//         st.pop();
//     }
    
    
//     return 0;
// }